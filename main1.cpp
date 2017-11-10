#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
	char str1[256];
	int n = 0;
        string str2;
	bool fl1 = true, fl2 = false, fl3 = true;
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
	cout << endl;
	if ((fl3 == false) || (fl1 = false) || (j  != n)){
		cout << "An error has occurred while reading input data" << endl;
	}
	else{
		for (int i = 0; i < n / 2; i++){
			swap(a[i],a[n - i - 1]);
		}
		for (int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
	}
			
}
