#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
	char str1[256], str2[256], str3[256];
	int n = 0, m = 0;
	bool fl1 = true, fl2 = true, fl3 = true;
	cout << "Vvedite razmer matritsy" << endl;
	cin >> str1 >> str2;
	for (int i = 0; i < strlen(str1) - 1; i++){
		if ((str1[i] >= '0') && (str1[i] <= '9') && (str1[strlen(str1) - 1] == ',')){
			str3[i] = str1[i];
		}
		else{
			fl1 = false;
		}
	}
	for (int i = 0; i < strlen(str2); i++){
		if ((str2[i] >= '0') && (str2[i] <= '9'))
			;
		else{
			fl2 = false;
		}
	}
	if ((fl1 == true) && (fl2 == true)){
		n = atoi(str3);
		m = atoi(str2);
	}
	else cout << "An error has occurred while reading input data" << endl;
	int a[n][m], x;
	
	if ((fl1 == true) && (fl2 == true)) cout << "Vvedite stroki massiva" << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if(cin >> x, cin.good()){
				a[i][j] = x;
			}
			else fl3 = false;
		}
	}
	int sdvig = 0, b[m * 2 + (n - 2) * 2], element = 0;

	if ((fl3 == false) && (fl1 == false) && (fl2 == false)) cout << "An error has occurred while reading input data" << endl;
	else{
		if ((fl1 == true) && (fl2 == true)) cout << "Vvedite sdvig" << endl;
		cin >> sdvig;
		for (int j = 0; j < m; j++){
			b[element] = a[0][j];
			element++;
		}
		for (int j = 1; j < n; j++){
			b[element] = a[j][m - 1];
			element++;
		}
		for (int j = m - 2; j > -1; j--){
			b[element] = a[n - 1][j];
			element++;
		}
		for (int j = n - 2; j > 0; j--){
			b[element] = a[j][0];
			element++;
		}
		int c[(m * 2 + (n - 2) * 2) - sdvig], d[sdvig], countc = 0, countd = 0;
		for(int i = 0; i < (m * 2 + (n - 2) * 2) - sdvig; i++){
			c[i] = b[i];
			countc++;
		}
		int k = (m * 2 + (n - 2) * 2) - sdvig;
		for (int i = 0; i < sdvig; i++){
			d[i] = b[k];
			countd++;
			k++;
		}
		for (int i = 0; i < countc / 2; i++){
			swap(c[i], c[countc - i - 1]);
		}
		for (int i = 0; i < countd / 2; i++){
			swap(d[i], d[countd - i - 1]);
		}
		for (int i = 0; i < m * 2 + (n - 2) * 2; i++){
			b[i] = 0;
		}
		for (int i = 0; i < countc; i++){
			b[i] = c[i];
		}
		k = countc;
		for (int i = 0; i < countd; i++){
			b[k] = d[i];
			k++;
		}
		for (int i = 0; i < (countc + countd) / 2; i++){
			swap(b[i], b[(countc + countd) - i - 1]);
		}
		element = 0;
		for (int j = 0; j < m; j++){
			a[0][j] = b[element];
			element++;
		}
		for (int j = 1; j < n; j++){
			a[j][m - 1] = b[element];
			element++;
		}
		for (int j = m - 2; j > -1; j--){
			a[n - 1][j] = b[element];
			element++;
		}
		for (int j = n - 2; j > 0; j--){
			a[j][0] = b[element];
			element++;
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
	cout << endl;
	}
}
