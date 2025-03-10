//Đề: Hãy đếm số lượng chữ số lẻ của số nguyên dương n
#include<iostream>
using namespace std;
int demChuSoLe(int n){
	if(n < 10){
		if(n % 2 == 1){
			return 1;
		}else{
			return 0;
		}
	}else{
		int soCuoi = n % 10;
		if(soCuoi % 2 == 1){
			return 1 + demChuSoLe(n / 10);
		}else{
			return 0 + demChuSoLe(n / 10);
		}
	}
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"So "<<n<<" co "<<demChuSoLe(n)<<" chu  so le!";
	return 0;
}