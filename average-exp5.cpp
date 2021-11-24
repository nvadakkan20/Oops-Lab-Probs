#include <iostream>

using namespace std;

class average
{
    
    public:
    static int num,arrnum[10];
    static float avg()
    {
         int sum=0;
             for(int i=0;i<num;i++)
                 {
                     sum+=arrnum[i];
                 }
                 
             float avg=sum/float (num);
             cout<<"\nAverage= "<<avg;
    }
    
    void input()
    {
               
         cout<<"Enter the number of elements: ";
         cin>>num;
         cout<<"Enter the "<<num<<" elements : ";
         for(int i=0;i<num;i++)
         {
             cin>>arrnum[i];
         }
         
     }
     
         
    void multip()
    {
        
        cout<<"\nEnter the number with which the elements to be multiplied : ";
        int m;
        cin>>m;
        for(int i=0;i<num;i++)
        {
            arrnum[i]*=m;
        }
    }
    
    void sort()
    {
        int swap;
        for(int i=0;i<num;i++)
        {
            for(int j=i+1;j<num;j++)
            {
                if(arrnum[i]>arrnum[j])
                {
                    swap=arrnum[i];
                    arrnum[i]=arrnum[j];
                    arrnum[j]=swap;
                    
                }
            }
        }
        
        cout<<"\nSorted array is: ";
        for(int i=0;i<num;i++)
        cout<<arrnum[i]<<" ";
        
        
    }
    
            
        
};
int average::num=0;
int average::arrnum[10]={0};

        
int main()
{
    
    average a,b,c;
    a.input();
    a.avg();
    b.multip();
    c.sort();
    a.avg();
    
    
    return 0;

}



