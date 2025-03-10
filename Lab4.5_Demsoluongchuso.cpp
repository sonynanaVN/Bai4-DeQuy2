//Đề: Đếm số lượng chữ số nguyen duong n
#include<iostream>
using namespace std;
int demChuSo(int n){
	if(n == 0){
		return 0;
	}
	return 1 + demChuSo(n / 10);
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"So "<<n<<" co "<<demChuSo(n)<<" chu so!";
	return 0;
}