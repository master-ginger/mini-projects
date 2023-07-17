//password checker
#include <bits/stdc++.h>
using namespace std;

bool passCheck(string password,string confirm)
{
    if(password!=confirm)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void passw(string password,string pass,string usera,string usere)
{
    if(pass==password && usere==usera)
    {
        cout<<"Logged in successfully";
    }
    else if(pass!=password){
        cout<<"Wrong password";
    }
    else if(usere!=usera)
    {
        cout<<"User ID not found";
    }
}

int main()
{
    string user_id,password,confirm;
    cout<<"SIGN UP";
    cout<<"\nEnter user id: ";
    cin>>user_id;
    cout<<"Enter password: ";
    cin>>password;
    cout<<"Confirm password: ";
    cin>>confirm;
    if(!passCheck(password,confirm))
    {
        cout<<"Passwords do not match";
    }
    else
    {
        cout<<"\nFor login enter the login details: ";
        string id,pass;
        cout<<"\nUSER ID: ";
        cin>>id;

        cout<<"Password: ";
        cin>>pass;

        passw(password,pass,user_id,id);
    }
    return 0;
}