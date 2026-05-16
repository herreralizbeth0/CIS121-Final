#include <iostream>
#include <string>
using namespace std;

class Membership
{
public:
    Membership()
    {
        fname = "Not Entered";
        lname = "Not Entered";
        age = 18;
        type = "Bronze";
    }

    void Member_First_Name(string f){ fname = f; }
    string Member_First_Name(){ return fname; }

    void Member_Last_Name(string l){ lname = l; }
    string Member_Last_Name(){ return lname; }

    void Member_Age(int a){ age = a; }
    int Member_Age(){ return age; }

    void Membership_Type(string t){ type = t; }
    string Membership_Type(){ return type; }

    float Membership_Cost()
    {
        float cost = 500;

        if(type == "Gold") cost = 1200;
        if(type == "Silver") cost = 1000;

        if(age > 50)
            cost = cost * 0.9;

        return cost;
    }

private:
    string fname, lname, type;
    int age;
};

int main()
{
    Membership m;

    string f,l,t;
    int a;

    while(cin)
    {
        cout<<"first name: ";
        cin>>f;

        cout<<"last name: ";
        cin>>l;

        cout<<"age: ";
        cin>>a;

        cout<<"type (Gold/Silver/Bronze): ";
        cin>>t;

        m.Member_First_Name(f);
        m.Member_Last_Name(l);
        m.Member_Age(a);
        m.Membership_Type(t);

        cout<<"\n--- info ---\n";
        cout<<"name: "<<m.Member_First_Name()<<" "<<m.Member_Last_Name()<<endl;
        cout<<"age: "<<m.Member_Age()<<endl;
        cout<<"type: "<<m.Membership_Type()<<endl;
        cout<<"cost: "<<m.Membership_Cost()<<endl<<endl;
    }

    return 0;
}
