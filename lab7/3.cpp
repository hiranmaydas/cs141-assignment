#include<iostream>
using namespace std;
 
class rect {
  public:
  double side1;
  double side2;
  double  get_area(void){
	return side1*side2;
}
double get_perimeter(void){
return 2*(side1 + side2);	
}
};
 
int main (){
	rect archi;
	rect hiran;
	cout<<"enter the sides of rectangle archi"<<endl;
	cin >>archi.side1;
	cin >>archi.side2;
	cout<<"enter the sides of rectangle hiran"<<endl;
	cin >>hiran.side1;
	cin>>hiran.side2;
	cout<< "the area of the rectangle archi  is "<<archi.get_area()<<endl;
	cout<<"area of the rectangle hiran is "<<hiran.get_area()<<endl;
	cout<<"area of the rectangle archi is "<<archi.get_perimeter()<<endl;
	cout<<"area of the rectangle hiran is "<<hiran.get_perimeter()<<endl;
	return 0;
}
