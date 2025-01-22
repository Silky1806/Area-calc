#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int choice;
	float area, radius,length,width;
cout<<"1 area of circle"<<endl;
cout<<"2 area of rectangle"<<endl;
cout<<"3 area of square"<<endl;
cin>>choice;	
switch(choice){
	case 1:
	    cout<<"enter the radius of circle :: ";
	    cin>>radius;
	    area= 3.14 * pow(radius,2);
	break;
	case 2:
		cout<<"enter the length of rectangle :: ";
		cin>>length;
		cout<<"enter the width of rectangle :: ";
		cin>>width;
		area= length * width;
	break;
	case 3:
	    cout<<"enter the length of side of square :: ";
	    cin>>length;
	    area= pow(length,2);
	break;

	default:
	cout<<"\nInvalid Choice !";	
}
	
cout << "Area: " << area << endl; 	
return 0;
}
