#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
	char str1[256], str2[256];
	int n = 0, m = 0, element = 1, oldn = 0;
	bool fl1 = true, fl2 = false, fl3 = true, fl4 = true, fl5 = true;
	cout << "Vvedite razmer matritsy" << endl;
	cin >> str1 >> str2;
	for (int i = 0; i < strlen(str1); i++){
		if ((str1[i] >= '0') && (str1[i] <= '9'))
			;
		else{
			fl1 = false;
		}
	}
	for (int i = 0; i < strlen(str2); i++){
		if ((str2[i] >= '0') && (str2[i] <= '9'))
			;
		else{
			fl5 = false;
		}
	}
	if ((fl1 == true) && (fl5 == true)){
		n = atoi(str1);
		m = atoi(str2);
	}
	else cout << "An error has occurred while reading input data" << endl;
	
	int a[n][m], j = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++) a[i][j] = 0;
	}
		
	for (int i = 0; i < n / 2; i++){
		for (int j = i; j < m - i; j++){
			a[i][j] = element;
			element++;
		}
		for (int j = i + 1; j < n - i; j++){
			a[j][m - i - 1] = element;
			element++;
		}
		for (int j = m - i - 2; j > i - 1; j--){
			a[n - i - 1][j] = element;
			element++;
		}
		for (int j = n - i - 2; j > i; j--){
			a[j][i] = element;
			element++;
		}
		
	}
	if ((n == m) && (n % 2 != 0)) a[n / 2 + 1][n / 2 + 1] = element;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
	cout << endl;
	}
			
}
