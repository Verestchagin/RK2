#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
	char str1[256], str3[256];
	int n = 0;
        string str2;
	bool fl1 = true, fl2 = false, fl3 = true, fl4 = true;
	cout << "Vvedite kolichestvo elementov" << endl;
	cin >> str1;
	for (int i = 0; i < strlen(str1); i++){
		if ((str1[i] >= '0') && (str1[i] <= '9'))
			;
		else{
			fl1 = false;
		}
	}
	if (fl1 == true){
		n = atoi(str1);
	}
	else cout << "An error has occurred while reading input data" << endl;
	int a[n], j = 0;
	for (int i = 0; i < n; i++){
		a[i] = 0;
	}
	if (fl1 == true) cout << "Vvedite elementy v stroky cherez probel" << endl;
	for (int k = 0; k < n; k++){
		cin >> str2;
		for (int i = 0; i < str2.length(); i++){
			if ((str2[i] >= '0') && (str2[i] <= '9')){
				a[j] = a[j] * 10 + str2[i] - 48;
			}
			else{
				 fl3 = false;
			}
		}
		j++;
	}
	int sdvig = 0, m = 0, k = 0;
	cout << "Vvedite sdvig" << endl;
	cin >> str3;
	for (int i = 0; i < strlen(str3); i++){
		if ((str3[i] >= '0') && (str3[i] <= '9'))
			;
		else{
			fl4 = false;
		}
	}
	if (fl4 == true){
		sdvig = atoi(str3);
	}
	int b[n - sdvig], c[sdvig];
	if ((fl3 == false) || (fl1 == false) || (j  != n) || (fl4 == false)){
		cout << "An error has occurred while reading input data" << endl;
	}
	else{
		for (int i = 0; i < n; i++){
			if (i < n - sdvig){	
				b[m] = a[i];
				m++;
			}
			if (i >= n - sdvig){
				c[k] = a[i];
				k++;
			}
		}
		for (int i = 0; i < k; i++){
			cout << c[i] << " ";
		}
		for (int i = 0; i < m; i++){
			cout << b[i] << " ";
		}
	}
}
