#include <iostream>
using namespace std;
class Product{
    public:
    string name;
    int id;
    double price;
    int quantity;

};
class SuperMarket{
    private:
    int position = 0;
    public:
    Product obj[10];

    void addProduct(){
        cout<<"Enter the name of the product: ";
        cin>>obj[position].name;
        cout<<"Enter the price: ";
        cin>>obj[position].price;
        cout<<"Enter quantity: ";
        cin>>obj[position].quantity;
        obj[position].id = position;
        position++;
    }

    void deleteProduct(){
        string name;
        int temp;
        int choose;
        int flag = 0;
        cout<<"\nEnter the name of the product you wanna delete or change the quantity: ";
        cin>>name;
        for(int i = 0;i<10;i++){
            if(name == obj[i].name){
               flag = 1;
               temp = i;
            }
        }
     
        if(flag==1){
            obj[temp].name = "";
        obj[temp].price = 0;
        cout<<"\nProduct deleted successfully\n";
        }
        else{
            cout<<"\nNo product exists with that name\n";
        }
      
    }

    void orderSum(){
        double sum=0;
        for(int i = 0;i<10;i++){
            sum += obj[i].price *obj[i].quantity;
        }
        cout<<"Order sum is: "<< sum<<"\n";
    }
};
int main(){
    SuperMarket obj;
    int choice,transactions=0;
    while(choice < 5){
        cout<<"Enter 1 for adding a product, 2 for deleting a product or change quantity , 3 for order sum, 4 to know number of transactions, 5 to cancel: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            obj.addProduct();
            break;
        case 2: obj.deleteProduct();
                break;
        case 3: obj.orderSum();
                break;
        case 4: cout<<"\nNumber of transactions done so far: "<<transactions;
                break;
        case 5: exit(1);
        }
        transactions++;
        cout<<"\n____________\n\n";
    }
}
