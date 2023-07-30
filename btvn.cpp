#include <iostream>
#include <cmath>
using namespace std;

int logarit(int n){
	int dem =0;
	while (n>=10){
		n/10;
		dem++;
	}
	return dem;
}
int sum(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++)
		sum += i;
	return sum;
}
void Sum(int n, int sum){
	cout <<" Nhap vao so nguyen n:"; cin >> n;
    for(int i=1; i<n; i+=2){
    	sum = sum +i;
	} 
} 
int Tongchan() {
	int n;
	int sum = 0, temp;
	cout << "Nhap so nguyen : ";
	cin >> n;
	while (n != 0) {
		temp = n % 10;
		if (temp % 2 == 0)
			sum += temp;
		n /= 10;
	}
}
void dao(int& hang_chuc, int& hang_dv){
    int temp = hang_chuc;
    hang_chuc = hang_dv;
    hang_dv = temp;
}
int main() {
    int chon;
    do {
    	cout << "========== MENU ==========" << endl;
        cout << "1. Dem so luong chu so cua so do" << endl;
        cout << "2. Tinh tong cac chu so do :" << endl;
        cout << "3. Tinh tong cac chu so le" << endl;
        cout << "4. Tinh tong cac chu so chan: " << endl;
        cout << "5. Dao so cua n" << endl;
        cout << "==========================" << endl;
        cout << "Nhap lua chon cua ban (0-5): ";
        cin >> chon;

        switch (chon) {
            case 1:
               int n;
	            cout<<"Nhap vao so nguyen n: ";
	            cin>>n;
                cout<<"So luong chu so cua so nguyen la: "<<logarit(n)+1<<endl;
			    break;
			case 2:
	           do {
		       cout << "Nhap n: ";
		       cin >> n;
	           } while (n <= 0);
	           cout << "Tong cua day so la: " << sum(n)<<endl;
               return 0;
               break;
            case 3:
            	cout<<"Tong cac so le tu 1 den "<<n<<" là: "<<sum;
                return 0;
                break;
            case 4: 
                cout <<"Tong cac so le "<<n <<"la"<<sum;
                return 0;
                break;
            case 5:
                int a, b;
                cout << "Nhap so nguyen: ";
                cin >> a;
                cout << "Nhap so nguyen thu hai: ";
                cin >> b;
                dao(a, b);
                cout << "Ket qua sau khi dao: " << a << " " << b << endl;
                break;
            
			case 0:
                cout << "Thoat chuong trinh. Tam biet!" << endl;
                break;
            default:
                cout << "Lua chon khong hop le. Moi nhap lai." << endl;
                break;
        }

        cout << endl;
    } while (chon != 0);

    return 0;
}

