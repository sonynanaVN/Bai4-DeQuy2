//Đề: Tìm ước số chung lớn nhất của 2 số nguyên a, b
#include<iostream>
using namespace std;
int ucln(int a, int b){
	if(b == 0){
		return a;
	}else{
		return ucln(b, a % b);

	}
}
int main(){
	int a, b;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"UCLN("<<a<<", "<<b<<") la: "<<ucln(a, b);
	return 0;
}