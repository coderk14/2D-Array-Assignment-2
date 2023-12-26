#include<iostream>
#include <climits>
using namespace std;
int main(){
int m;
cout << "Enter the number of rows/column : ";
cin >> m;

int a[m][m];

int total=m*m;

int minr=0;
int minc=0;
int maxr=m-1;
int maxc=m-1;

int x=1;

cout << "Enter the matrix element : " << endl;

while(minr<=maxr && minc<=maxc) {

    for(int j=minc;j<=maxc && x <= total;j++) {
        a[minr][j]=x;
        x++;
    }
    minr++;

    for(int i=minr;i<=maxr && x <= total;i++) {
      a[i][maxc]=x;
        x++;
    }
    maxc--;

    for(int j=maxc;j>=minc && x <= total;j--) {
      a[maxr][j]=x;
        x++;
    }
    maxr--;

    for(int i=maxc;i>=minc && x <= total;i--) {
        a[i][minc]=x;
        x++;
    }
    minc++;


}

cout << endl;

for(int i=0;i<m;i++) {
    for(int j=0;j<m;j++) {
        cout << a[i][j] << " ";
    }
    cout << endl;
}


return 0;
}