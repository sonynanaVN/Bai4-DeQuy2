//Đề: Tìm chữ số đầu tiên của số nguyên dương n
#include<iostream>
using namespace std;
int chuSoDau(int n){
	if(n < 10){
		return n;
	}else{
		return chuSoDau(n / 10);
	}
}
int main(){
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	cout<<"Chu so dau tien cua so "<<n<<" la: "<<chuSoDau(n);
	return 0;
}