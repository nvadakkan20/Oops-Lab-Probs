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

    int cartPosition = 0;

    Product obj[10];

    string cartName[10];

    int cartQuantity[10];

    double cartPrice[10];


    void addCartProduct(){

        string name;

        int quantity,temp;

        int flag = 0;

        cout<<"\nEnter the name of the product you wanna add: ";

        cin>>name;

        cout<<"\nEnter product quantity: ";

        cin>>quantity;

        for(int i = 0;i<position;i++){

            if(name == obj[i].name){

               flag = 1;

               temp = i;

            }

        }

        if(flag==1&&quantity<obj[temp].quantity){

            cartName[cartPosition]= name;

            cartPrice[cartPosition] =  obj[temp].price;

            cartQuantity[cartPosition] = quantity;

            cartPosition++;

        cout<<"\nProduct added successfully\n";

        }

        else if(quantity>obj[temp].quantity){

            cout<<"\n Not enough stock";

        }

        else{

            cout<<"\nNo product exists with that name\n";

        }


    }

    void deleteCartProduct(){

          string name;

        int temp;

        int flag = 0;

        cout<<"\nEnter the name of the product you wanna delete: ";

        cin>>name;

        for(int i = 0;i<cartPosition;i++){

            if(name == obj[i].name){

               flag = 1;

               temp = i;

            }

        }

        if(flag==1){

            cartName[temp] = "";

        cartPrice[temp] = 0;

        cartQuantity[temp] = 0;

        cout<<"\nProduct deleted successfully\n";

        }

        else{

            cout<<"\nNo product exists with that name\n";

        }


    }

    void cartDetails(){

        double sum=0;

        for(int i = 0;i<cartPosition;i++){

            sum+=cartPrice[i]*cartQuantity[i];

            cout<<"\nCartProducts are: "<<cartName[i]<<"  ";

        }

        cout<<"\nOrder Sum: "<<sum;

    }

    public:

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

     void cartTransactions(){

        int choice;

        while(choice<4){

            cout<<"\nEnter 1 for adding product to cart\n2 for deleting\n3 for order details\n4 for placing order: ";

            cin>>choice;

            switch (choice)

            {

            case 1:

                addCartProduct();

                break;

            case 2: 

                 deleteCartProduct();

                 break;

            case 3: cartDetails();

                    break;

            case 4: cartDetails();

                    cout<<"\nThanx for shopping with us\n";       

            }

        }

    };


    void deleteProduct(){

        string name;

        int temp;

        int flag = 0;

        cout<<"\nEnter the name of the product you wanna delete: ";

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


    void availableProducts(){

        cout<<"Ordered items are: ";

        for(int i = 0;i<position;i++){  

           cout <<obj[i].name<<": "<<obj[i].quantity<<"   ";

        }   

    }

   

   

};

int main(){

    SuperMarket obj;

    int choice,transactions;

    while(choice < 6){

        cout<<"Enter 1 for adding a product\n2 for deleting a product \n3 for Available products \n4 to know number of transactions\n5 to Order a item\n6 to leave: ";

        cin>>choice;

        switch (choice)

        {

        case 1:

            obj.addProduct();

            break;

        case 2: obj.deleteProduct();

                break;

        case 3: obj.availableProducts();

                break;

        case 4: cout<<"\nNumber of transactions done so far: "<<transactions;

                break;

        case 5: obj.cartTransactions();

                 break;

        case 6: cout<<"visit again\n";

                break ;        

        }

        transactions++;

        cout<<"\n______________________________\n\n";

    }

}
