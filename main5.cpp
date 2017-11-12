#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
	char str1[256], str2[256], str3[256];
	int n = 0, m = 0, element = 1;
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
	
	int b[n*m], countb = 0, sdvig = 0;
	int a[n][m], j = 0;
	if ((fl1 = true) && (fl5 = true)) cout << "Vvedite massiv" << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}

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
	for (int i = 0;i < m*n;i++){
		b[i] = 0;
	}
	int z = 0;
	int c[countb - sdvig], d[sdvig], countc = 0, countd = 0;


	
	int s[n][m];
	for (int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			s[i][j] = a[i][j];
		}
	}
	//int i = 0;
for (int i = 0; i < n; i++){
		countb = 0;
		
		
		for (int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				s[i][j] = a[i][j];
			}
		}
		for (int j = 0;j < m*n;j++){
		b[j] = 0;
	}
		for (int j = i; j < m - i; j++){
			b[countb] = a[i][j];
			countb++;
		}
		
		for (int j = i + 1; j < n - i; j++){
			b[countb] = a[j][m - i - 1];
			countb++;
		}
		for (int j = m - i - 2; j > i - 1; j--){
			b[countb] = a[n - i - 1][j];
			countb++;
		}
		for (int j = n - i - 2; j > i; j--){
			b[countb] = a[j][i];
			countb++;
		}
		for (int k = 0; k < countb;k++){
			cout << b[k]<<"++";
		}
		cout<<endl;
		countc = countd = 0;
		for (int h = 0;h < countb;h++){
			c[h] = d[h] = 0;
		}
for (int k = 0; k < countb - sdvig; k++){
		c[k] = b[k];
		countc++;
	}
	j = countb - sdvig;
	for (int k = 0; k < sdvig; k++){
		d[k] = b[j];
		j++;
		countd++;
	}
	

	for (int k = 0; k < countc / 2; k++){
			swap(c[k],c[countc - k - 1]);
	}
	for (int k = 0; k < countd / 2; k++){
			swap(d[k],d[countd - k - 1]);
	}
	
	for (int k = 0; k < countc+countd;k++){
		b[k] = 0;
	}
	for (int k = 0;k <countc;k++){
		b[k] = c[k];
	}
	j = countc;
	for (int k = 0;k<countd;k++){
		b[j] = d[k];
		j++;
	}
	for (int k = 0; k < (countd + countc) / 2; k++){
			swap(b[k],b[(countd + countc) - k - 1]);
	}
	for (int k = 0; k < countb;k++){
			cout << b[k]<<"--";
		}
	cout<<endl;

for (int g = 0;g<n;g++){
		for(int j = 0;j<m;j++){
			a[g][j] = s[g][j];
		}
	}	
z = 0;
	for (int j = i; j < m - i; j++){
			a[i][j] = b[z];
			z++;
		}
		for (int j = i + 1; j < n - i; j++){
			a[j][m - i - 1] = b[z];
			z++;
		}
		for (int j = m - i - 2; j > i - 1; j--){
			a[n - i - 1][j] = b[z];
			z++;
		}
		for (int j = n - i - 2; j > i; j--){
			a[j][i] = b[z];
			z++;
		}

	
	for (int p = 0; p<n;p++){
		for (int j = 0;j<m;j++){
			cout << a[p][j] << "new ";
		}
	cout<<endl;
	}
cout<<endl;
}




	/*countb = z;
for (int i = 0; i < countb;i++){
		cout << b[i]<<" bbb ";
	}
	
	
	for (int i = 0; i < countc+countd;i++){
		cout << b[i]<<" bbb ";
	}
	cout<<endl;
	for(int i = 0; i < countc; i++){
		cout << c[i] << " ccc ";
	}
	cout << endl;
	for(int i = 0;i<countd;i++){
		cout << d[i] << " ddd ";
	}


	z = 0;
	for (int i = 0; i < n; i++){
		for (int j = i; j < m - i; j++){
			a[i][j] = b[z];
			z++;
		}
		for (int j = i + 1; j < n - i; j++){
			a[j][m - i - 1] = b[z];
			z++;
		}
		for (int j = m - i - 2; j > i - 1; j--){
			a[n - i - 1][j] = b[z];
			z++;
		}
		for (int j = n - i - 2; j > i; j--){
			a[j][i] = b[z];
			z++;
		}
	}*/
	
	for (int i = 0; i<n;i++){
		for (int j = 0;j<m;j++){
			cout << a[i][j] << " ";
		}
	cout<<endl;
	}
			
}
