//Đề: Viết hàm đệ quy xác định chiều dài chuỗi
#include<iostream>
#include<string>
using namespace std;
int dodai(char s[], int dem) {
    if (s[dem] != '\0') {
        return dodai(s, dem + 1);
    } else {
        return dem;
    }
}
int main(){
	char s[1000];
	cout<<"Nhap chuoi: ";
	cin.getline(s, 1000);
	cout<<"do dai xau s la: "<<dodai(s,0);
}