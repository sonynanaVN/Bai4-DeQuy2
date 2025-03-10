//Đề: Vi trùng cứ 1 giờ lại nhân đôi. 
//Vậy sau 5 giờ sẽ có mấy con vi trùng nếu ban đầu có 2 con
#include<iostream>
int demViTrung(int banDau, int gio){
	if(gio == 0){
		return banDau;
	}else{
		return demViTrung(banDau * 2, gio - 1);
	}
}
using namespace std;
int main(){
	int viTrungBanDau = 3;
	int gio = 6;
	cout<<"Vay sau "<<gio<<" co "<<demViTrung(viTrungBanDau, gio)<<" con vi trung!";
	return 0;
}