// WAP TO CONVERT kilometer to centimeter ,feet ,meter ,inch. by using  MANUPILATORS  ENDL,SET W(),SET FIT(),SET PRECISIONS().
#include<iomanip>
#include<iostream>

using namespace std;
int main()
{
    float km,cm,m,inch,feet,n;
     cout<<"enter any number of  km : ";
     cin>>km;
     m= km/1000;
     cout <<"answer into m  " <<  m <<endl;

     // km to cm ...1 km =100000
     cm=km/100000;
     cout<<setw(10);
     cout <<"answer in cm  " << cm << endl;

    // km to inch ...1 km =39370.1
     inch=km/39370.1;
     cout<<setfill('#');
     cout<<setw(20);
     
    
     cout <<  "answer in inch  " << inch  << endl;


     //km to feet 1 feet =3280.1
     feet=km/3280.8;
     cout<< setprecision(3);
     cout <<"answer in feet    " << feet  << endl;
     return 0;

}
