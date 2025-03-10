//Đề: Gửi ngân hàng 1000 USD, lãi suất 12%/năm. Số tiền có được
//sau 30 năm là bao nhiêu
#include<iostream>
using namespace std;
int tinhTien(int tien, float laiSuat, int nam){
	if(nam == 0){
		return tien;
	}else{
		double tienLai = (tien * laiSuat) / 100;
		return tinhTien(tien + tienLai, laiSuat, nam - 1);
	}
}
int main(){
	int tienBanDau = 1000;
	float laiSuat = 12;
	int nam = 30;
	double tatToan = tinhTien(tienBanDau, laiSuat, nam);
	cout<<"So tien co duoc sau "<<nam<<" la: "<<tatToan;
}











		