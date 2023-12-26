#include<iostream>
#include <climits>
using namespace std;
int main(){
int n,m;
cout << "Enter the number of rows and column: ";
cin >> n;
int a[n][n];
cout << "Enter the matrix element : " << endl;
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < n ; j++){
cin >> a[i][j];
}
}

for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < n ; j++){
if(i==j) cout << a[i][j];
else if (i+j==(n-1)) cout << a[i][j];
else cout << " ";
}
cout << endl;
}


return 0;
}