#include <iostream>
#include <string>

using namespace std;

int main(){

int k=1;

while (k==1){

cout<<"MENU"<<endl;
cout<<"1.Add"<<endl;
cout<<"2.Subtract"<<endl;
cout<<"3.Multiply"<<endl;
cout<<"4.Divide"<<endl;
cout<<"5.Modulus"<<endl;

int x;
cout<<"Enter your choice(1-5)"<<endl;
cin>>x;

int y;
cout<<"Enter 1st integer number"<<endl;
cin>>y;

int z;
cout<<"Enter 2nd integer number"<<endl;
cin>>z;

if(x==1){
    int sum = y+z;
 cout<<"Answer:"<<sum<<endl;
}
else if(x==2){
    int sub = y-z;
 cout<<"Answer:"<<sub<<endl;
}
else if(x==3){
    int multi = y*z;
 cout<<"Answer:"<<multi<<endl;
}
else if(x==4){
    int divide = y/z;
 cout<<"Answer:"<<divide<<endl;
}
else if(x==5){
    int mod = y%z;
 cout<<"Answer:"<<mod<<endl;
}
cout<<"do you want to continue? press 1 for YES or press 2 for NO"<<endl;
cin>>k;
cout<<endl;
}

    return 0;
}
