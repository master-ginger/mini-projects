//Food cart

#include <bits/stdc++.h>
using namespace std;

class Food
{
    public:
    unordered_map <string,int> cart;
    int total=0;
    void addFood(string name, int price)
    {   
        cart.insert({name,price});
        total+=price;
    }

    unordered_map<string,int>::iterator it = cart.begin();
    void bill(int items)
    {
        for(auto x:cart)
        {
            cout<<endl<<x.first<<": "<<x.second;
        }
        cout<<"\nTotal amount: "<<total;
    }

};


int main()
{
    int n;
    cout<<"Enter number of items: ";
    cin>>n;

    string food;
    int price;
    Food f;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter item no."<<i+1<<": ";
        cin>>food;
        cout<<"Enter price of item no. "<<i+1<<": ";
        cin>>price;

        f.addFood(food,price);
    }

    f.bill(n);
    return 0;
}