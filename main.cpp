#include<iostream>
#include<string.h>
using namespace std;

class list{
    public:
        int id;
        string name;
        int price;
};

// Now create bill display function 
void display(list l[] , int size , string cName , string cAddress){
    int total = 0;
    cout<<"\n\n\n";
    cout<<"\t Aniket Store \n";
    cout<<"\t-------------- \n";
    cout<<"\n";
    cout<<"Name : "<<cName<<" \t Address : "<<cAddress<<"\n";
    cout<<"\n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Id :  "<<l[i].id<<"\t";
        cout<<"itemName :  "<<l[i].name<<" \t";
        cout<<"Price :  "<<l[i].price<<"\n";
        cout<<"------------------------------------------------\n";
        total += l[i].price;
    }
    cout<<"\tTotal : "<<total<<endl;
    cout<<"\n\n";
    cout<<"\t Thanks for visiting \n";
    cout<<"\n\n";

}


int main(){
    cout<<"Hello.........."<<endl;
    string Name;
    string Address;
    int totalItems;
    cout<<"Enter your name \t";
    cin>>Name;
    cout<<"Enter your address \t";
    cin>>Address;
    cout<<"Enter total items \t";
    cin>>totalItems;
    cout<<"\n";
    //create object array
    list l[totalItems];
    //insert items
    for (int i = 0; i < totalItems; i++)
    {
        l[i].id = (i+1);
        cout<<"Enter "<<(i+1)<<" item name \t";
        cin>>l[i].name;
        cout<<"Enter price \t\t";
        cin>>l[i].price;
    }
    // call display function
    display(l , totalItems , Name , Address);


}