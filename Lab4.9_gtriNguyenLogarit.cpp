//Đề: Tìm giá trị nguyên logarit cơ số 2 của n
#include<iostream>
using namespace std;
int logaritCoSo2(int n){
	if(n < 2){
		return n;
	}else{	
		return 1 + logaritCoSo2(n / 2);
	}
}
int main(){
	int n;
	do{
		cout<<"Nhap n: ";
		cin>>n;
	}while(n < 0);
	int log2_n = logaritCoSo2(n);
	cout<<"Gia tri nguyen co so 2 cua "<< n << " la: "<<log2_n;
	return 0;
}