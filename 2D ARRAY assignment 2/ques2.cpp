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
if(i<j) {
    int temp=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=temp;
}
}
}

for(int j = 0 ; j < n ; j++){
for(int i = 0 ,k=n-1 ; i < n,k>=0 ; i++,k--){
    if(i<k) {
        int temp=a[i][j];
        a[i][j]=a[k][j];
        a[k][j]=temp;
    }
}
}

for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < n ; j++){
cout << a[i][j] << " ";
}
cout << endl;
}



return 0;
}