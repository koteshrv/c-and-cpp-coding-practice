#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	int t,tot=0;
	cin >>t;
	while(t--){
        int n,k;
        cin >>n;
        int time[n],shows[4][4]={0};
        char m[n];
        for(int i=0;i<n;i++){
           cin >>m[i] >>time[i];
        }
        for(int j=0;j<n;j++){
            if(m[j]=='A')
                k=0;
            if(m[j]=='B')
                k=1;
            if(m[j]=='C')
                k=2;
            if(m[j]=='D')
                k=3;
            if(time[j]==12)
                shows[k][0]++;
            if(time[j]==3)
                shows[k][1]++;
            if(time[j]==6)
                shows[k][2]++;
            if(time[j]==9)
                shows[k][3]++;
		}
		
        int array_12show[4],array_3show[4],array_6show[4],array_9show[4],array_Ashow[4],array_Bshow[4],array_Cshow[4],array_Dshow[4];
        for(int i=0;i<4;i++){
            array_12show[i]=shows[i][0];
			array_Ashow[i]=shows[0][i];
        }
        for(int i=0;i<4;i++){
            array_3show[i]=shows[i][1];
            array_Bshow[i]=shows[1][i];
        }
        for(int i=0;i<4;i++){
            array_6show[i]=shows[i][2];
            array_Cshow[i]=shows[2][i];
        }
        for(int i=0;i<4;i++){
            array_9show[i]=shows[i][3];
            array_Dshow[i]=shows[3][i];
        }
        
        int max1=0,i=0,a1,max2=0,a2,max3=0,a3,a4,max4,count1=0,total1,total2;
        for(int i=0;i<4;i++){
            if(array_12show[i]>max1){
            max1=array_12show[i]; 
            a1=i;
            }
        }
        for(int i=0;i<4;i++){
            if(i==a1){
                continue;
            }
            if(array_3show[i]>max2) {
            max2=array_3show[i]; 
            a2=i;
            }
        }
        for(int i=0;i<4;i++){
            if(i==a1 || i==a2){
                continue;
            }
            if(array_6show[i]>max3){
            max3=array_6show[i]; 
            a3=i;
            }
        }
        
        for(int i=0;i<4;i++){
            if(i==a1 || i==a2 ||i==a3 ){
                continue;
            }
            max4=array_9show[i]; 
            a4=i;
        }
        //cout <<max1 <<"\t" <<max2 <<"\t" <<max3 <<"\t" <<max4 <<endl;

        if(max1==0){
            count1++;
        }
        if(max2==0){
            count1++;
        }
        if(max3==0){
            count1++;
        }
        if(max4==0){
            count1++;
        }
        int arr[4]={max1,max2,max3,max4};
        int n1=sizeof(arr)/sizeof(arr[0]); 
        sort(arr,arr+n1);

        total1=(arr[3]*100)+(arr[2]*75)+(arr[1]*50)+(arr[0]*25)-(count1*100);

        long long int m1=0,b1,m2=0,b2,m3=0,b3,b4,m4,count2=0;
        for(int i=0;i<4;i++){
            if(array_Ashow[i]>m1){
            m1=array_Ashow[i]; 
            b1=i;
            }
        }
        for(int i=0;i<4;i++){
            if(i==b1){
                continue;
            }
            if(array_Bshow[i]>m2) {
            m2=array_Bshow[i]; 
            b2=i;
            }
        }
        for(int i=0;i<4;i++){
            if(i==b1 || i==b2){
                continue;
            }
            if(array_Cshow[i]>m3){
            m3=array_Cshow[i]; 
            b3=i;
            }
        }
        for(int i=0;i<4;i++){
            if(i==b1 || i==b2 ||i==b3 ){
                continue;
            }
            m4=array_Dshow[i]; 
            b4=i;
        }
        
        //cout <<m1 <<"\t" <<m2 <<"\t" <<m3 <<"\t" <<m4 <<endl;
        
        
        if(m1==0){
            count2++;
        }
        if(m2==0){
            count2++;
        }
        if(m3==0){
            count2++;
        }
        if(m4==0){
            count2++;
        }

        int arr1[4]={m1,m2,m3,m4};
        int n2=sizeof(arr1)/sizeof(arr1[0]); 
        sort(arr1,arr1+n2);
        
        total2=(arr1[3]*100)+(arr1[2]*75)+(arr1[1]*50)+(arr1[0]*25)-(count2*100);
        
        
        if(total1 >total2){
            cout <<total1 <<endl;
            tot+=total1;
        }
        else{
            cout <<total2 <<endl;
            tot+=total2;
        }
    }
    cout <<tot <<endl;
	return 0;
}
