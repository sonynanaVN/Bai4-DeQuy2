//Đề: Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không
#include<iostream>
using namespace std;
bool ktraToanChan(int n){
	if(n < 10){
		if(n % 2 == 0){
			return true;
		}else{
			return false;
		}
	}else{
		int soCuoi = n % 10;
		if(soCuoi % 2 != 0){
			return false; 
		}
		return ktraToanChan(n / 10);//f
	}
}
int main(){
	int n;
	do{
		cout<<"Nhap n: ";
		cin>>n;
	}while(n < 0);
	if(ktraToanChan(n) == true){
		cout<<"So "<<n<<" toan chan!";
	}else{
		cout<<"So "<<n<<" khong toan chan!";
	}
	return 0;
}