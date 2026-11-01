#include<iostream>
using namespace std;
int main(){
    int val, car=0, bike=0, jeep=0, bus=0;
    do{
        cout<<"enter '1' for car park :"<<endl<<endl;
        cout<<"enter '2' for bike park :"<<endl<<endl;
        cout<<"enter '3' for jeep park :"<<endl<<endl;
        cout<<"enter '4' for bus park :"<<endl<<endl;
        cout<<"enter '5' for total data :"<<endl<<endl;
        cout<<"enter '6' for erase data:"<<endl<<endl;
        cout<<"enter '0' for exit the program :"<<endl<<endl;
        cout<<"type here > :";cin>>val;

        if(val==1){
            car++;
            system("cls");
            cout<<"car is entered "<<endl<<endl;
        }
        else if(val==2){
            bike++;
            system("cls");
            cout<<"bike is entered "<<endl<<endl;
        }
        else if(val==3){
            jeep++;
            system("cls");
            cout<<"jeep is entered "<<endl<<endl;
        }
        else if(val==4){
            bus++;
            system("cls");
            cout<<"bus is entered "<<endl<<endl;
        }
        else if(val==5){
            system("cls");
            cout<<"total car : "<<car<<endl;
            cout<<"total bike : "<<bike<<endl;
            cout<<"total jeep : "<<jeep<<endl;
            cout<<"total bus : "<<bus<<endl<<endl;
        }
        else if(val==6){
            car=0;
            bike=0;
            jeep=0;
            bus=0;
            system("cls");
            cout<<"car : "<<car<<endl;
            cout<<"bike : "<<bike<<endl;
            cout<<"jeep : "<<jeep<<endl;
            cout<<"bus : "<<bus<<endl<<endl;

        }
        else if(val==0){
            exit(0);
        }
        else{
            cout<<"enter valid value"<<endl;
        }
    }
    while(true);
}
