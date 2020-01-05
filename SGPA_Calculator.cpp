#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float theory[6],lab[3],sgpa;
    cout <<"___________________________________________________________________" <<endl;
    cout <<"__________________Enter Your Theory marks below____________________" <<endl;
    cout <<"___________________________________________________________________" <<endl;
    for(int i=1;i<7;i++){
        cout <<"  Enter marks of subject marks "<<i <<" here:  ";
        cin >>theory[i];
    }
    cout <<"___________________________________________________________________" <<endl;
    cout <<"___________________Enter Your Lab marks below______________________" <<endl;
    cout <<"___________________________________________________________________" <<endl;
    for(int j=1;j<4;j++){
        cout <<"  Enter marks of lab marks "<<j <<" here:  ";
        cin >>lab[j];
    }

    sgpa=((((theory[1]+theory[2]+theory[3]+theory[4]+theory[5]+theory[6])*4)+((lab[1]+lab[2]+lab[3])*3))/33);
    cout <<"___________________________________________________________________" <<endl;
    cout <<"______________________Your SGPA is "<<sgpa <<"_________________________" <<endl;
    cout <<"___________________________________________________________________" <<endl;

}
