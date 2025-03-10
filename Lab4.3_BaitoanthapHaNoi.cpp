//Bài toán tháp Hà Nội
#include <iostream>
using namespace std;
void chuyen(int n, char a, char c){
	cout<<"Chuyen dia thu "<< n <<" tu coc "<<a<<" sang coc "<<c<<endl;
}
void thapHaNoi(int n, char a, char b, char c) {
    if (n == 1){
    	chuyen(1, a, c);
	}else{
		thapHaNoi(n - 1, a, c, b); 
		chuyen(n, a, c);
		thapHaNoi(n - 1, b, a, c);
	}
}

int main() {
    int n;
    cout<<"Nhap n: "; cin>>n;
    thapHaNoi(n, 'G', 'Z', 'C');
    return 0;
}
