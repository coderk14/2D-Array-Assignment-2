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

for(int j=0;j<n;j++) {
    if(j%2==0) {
    for(int i=n-1;i>=0;i--) {
        cout << a[i][j] << " ";
    }
    }
    else{
    for(int i=0;i<n;i++) {
        cout << a[i][j] << " ";
    } 
    }
}


return 0;
}