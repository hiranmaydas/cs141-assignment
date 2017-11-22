#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int result (int);

int main()
{
  int ph, ch, mt, bi,cp;
  cout << "enter the marks in physics , chemistry , math , bio and computer in order"<<endl;
  cin >>ph;
  cin >>ch;
  cin>>mt;
  cin>>bi;
  cin>>cp;
  cout << "subjects" <<"\t" <<"percentage" <<"\t"<<"grade"<<endl;
  result(ph);
  result(ch);
  result(mt);
  result(bi);
  result(cp);
  return 0;
  
  }
  int result(int a){
      char b;
      if (a>=90){
          b='A';
      }
      else if (a>=80){
          b='B';
      }
      else if (a>=70){
          b='C';
      }
     else if (a>=60){
          b='D';
      }
      else if (a>=40){
          b='E';
      }
     else if (a<40){
          b='F';
      }
      
      cout<< "Physics " << "\t" << a << "\t" << b <<endl;
      return 0;
  }