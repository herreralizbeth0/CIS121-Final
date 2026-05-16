#include <iostream>
#include <string>
using namespace std;

class Computer
{
public:
    Computer()
    {
        make = "Lenovo";
        model = "LE100A";
        cpu = "Intel";
        ram = "32GB";
        hardDrive = "HD";
        type = "Laptop";
    }

    void Computer_Make(string m){ make = m; }
    string Computer_Make(){ return make; }

    void Computer_Model(string mo){ model = mo; }
    string Computer_Model(){ return model; }

    void Computer_CPU(string c){ cpu = c; }
    string Computer_CPU(){ return cpu; }

    void Computer_RAM(string r){ ram = r; }
    string Computer_RAM(){ return ram; }

    void Computer_Hard_Drive(string h){ hardDrive = h; }
    string Computer_Hard_Drive(){ return hardDrive; }

    void Computer_Type(string t){ type = t; }
    string Computer_Type(){ return type; }

    float Computer_Cost()
    {
        float cost = 0;

        if(make == "Lenovo") cost = cost + 1200;
        if(make == "HP") cost = cost + 1000;
        if(make == "Apple") cost = cost + 2000;

        if(cpu == "Intel") cost = cost + 200;

        if(ram == "16GB") cost = cost + 300;
        if(ram == "32GB") cost = cost + 500;

        if(hardDrive == "SSD") cost = cost + 500;

        if(type == "Laptop") cost = cost + 300;
        if(type == "Tablet") cost = cost - 200;

        return cost;
    }

private:
    string make, model, cpu, ram, hardDrive, type;
};

int main()
{
    Computer c;

    string make, model, cpu, ram, hardDrive, type;

    while(cin)
    {
        cout<<"computer make (Lenovo/HP/Apple): ";
        cin>>make;

        cout<<"computer model: ";
        cin>>model;

        cout<<"cpu (Intel/AMD): ";
        cin>>cpu;

        cout<<"ram (8GB/16GB/32GB): ";
        cin>>ram;

        cout<<"hard drive (SSD/HD): ";
        cin>>hardDrive;

        cout<<"computer type (Laptop/Notebook/Tablet/Desktop): ";
        cin>>type;

        c.Computer_Make(make);
        c.Computer_Model(model);
        c.Computer_CPU(cpu);
        c.Computer_RAM(ram);
        c.Computer_Hard_Drive(hardDrive);
        c.Computer_Type(type);

        cout<<"\n--- computer info ---\n";
        cout<<"make: "<<c.Computer_Make()<<endl;
        cout<<"model: "<<c.Computer_Model()<<endl;
        cout<<"cpu: "<<c.Computer_CPU()<<endl;
        cout<<"ram: "<<c.Computer_RAM()<<endl;
        cout<<"hard drive: "<<c.Computer_Hard_Drive()<<endl;
        cout<<"type: "<<c.Computer_Type()<<endl;
        cout<<"cost: "<<c.Computer_Cost()<<endl<<endl;
    }

    return 0;
}
