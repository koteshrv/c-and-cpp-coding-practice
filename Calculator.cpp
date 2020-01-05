#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a,b,c;
  cout << "\tEnter any number    :  ";
  cin >> a ;
  cout << "\tEnter another number:  ";
  cin >> b ;
  cout << endl;
  cout <<" \t\t**************************"<<endl;
  cout <<" \t\tFor Addition       Press 1" << endl;
  cout <<" \t\tFor Subtraction    Press 2" << endl;
  cout <<" \t\tFor Multiplication Press 3" << endl;
  cout <<" \t\tFor Division       Press 4" << endl;
  cout <<" \t\tFor Remainder      Press 5" << endl;
  cout <<" \t\t**************************"<<endl;
  cout <<endl;
  cin >> c;
  switch(c){
    case 1:
    cout <<"Sum of a and b is " << a+b <<endl;
    break;
    case 2:
    cout <<"Subtraction of a and b is " << a-b <<endl;
    break;
    case 3:
    cout <<"Multiplication of a and b is "<< a*b <<endl;
    break;
    case 4:
    cout <<"Division of a and b is " << a/b <<endl;
    break;
    default:
    cout <<"Remainder of a and b is " << a%b <<endl;
  }

  return 0;

}
