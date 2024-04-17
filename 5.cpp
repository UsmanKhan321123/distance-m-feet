#include<iostream>
using namespace std;
int distance(){
	int distance;
	cout<<"Please enter the distance in meters : ";
	cin>>distance;
	cout<<distance<< "m distance into feet = "<<distance * 3.3<<" feet"<<endl;
}
int main(){
	distance();
}
