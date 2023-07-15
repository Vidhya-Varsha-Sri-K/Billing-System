#include<iostream>
#include<string.h>
using namespace std;
class list{
    public:
     int id;
     string name;
     int price;
};
//Create bill display function
void display(list arr[], int size, string cName, string cAddress){
    int total =0;
    cout<<"\n\n\n";
    cout<<"\t Doracakes Store \n";
    cout<<"\t----------------- \n";
    cout<<"\n";
    cout<<"Name : "<<cName<<"\t Address: "<<cAddress<<"\n";
    for(int i=0; i<size; i++){
        cout<<"Id:  "<<arr[i].id<<" \t";
        cout<<"Item Name:  "<<arr[i].name<<" \t";
        cout<<"Price:  "<<arr[i].price<<" \n";
        cout<<"--------------------------------------------\n";
        total +=arr[i].price;
    }
cout<<"\t Total: "<<total<<endl;
cout<<"\n\n";
cout<<"\t Thanks for visiting \n";
cout<<"\n\n";
}

int main() {
    cout<<"Hello........"<<endl;
    string Name;
    string Address;
    int totalItems;
    cout<<"Enter your name    \t";
    cin>>Name;
    cout<<"Enter your address    \t";
    cin>>Address;
    cout<<"Enter total items   \t";
    cin>>totalItems;
    cout<<"\n";
    //create an array of objects
    list arr[totalItems];
    //insert items
    for(int i=0; i< totalItems; i++){
        arr[i].id = (i+1);
        cout<<"Enter "<<(i+1)<<" item name \t";
        cin>>arr[i].name;
        cout<<"Enter price \t\t";
        cin>>arr[i].price;
        }
// call display function
display(arr, totalItems, Name, Address);
}

