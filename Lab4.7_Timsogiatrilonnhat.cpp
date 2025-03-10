//Đề: Tìm chữ số có giá trị lớn nhất của số nguyen duong n
#include<iostream>
using namespace std;
int chuSoMax(int n, int max_number) {
    if (n < 10) {
        return max(n, max_number);
    }
    int soCuoi = n % 10;
    max_number = max(soCuoi, max_number);
    return chuSoMax(n / 10, max_number);   
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Chu so co gia tri lon nhat cua so "<<n<<" la: "<<chuSoMax(n, 0)<<endl;
	return 0;
}