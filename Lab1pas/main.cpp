#include <iostream>
#include <time.h>
#include <math.h>
#define N 10
using namespace std;

int main()
{
    int n = 0;
    cout << "Your number: \t";
    cin >> n;
    int arr[n][n], temp1 = 0, temp2 = 0;
    srand(time(0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        arr[i][j] = 0 + rand() % 11;
        cout << arr[i][j] << "\t";
        }
    cout << "\n";
    }


    for(int i = 0; i<n; i++){
    temp1 += arr[i][i];
    temp2 += arr[i][n - i - 1];
    }


    cout << "\n" << temp1 << "\t" << temp2 << "\t";
    if(temp1>temp2){
        cout << "\nmain diag\n";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                arr[i][j] *= 2;
                cout << arr[i][j] << "\t";
            }
        cout << "\n";
        }
    }else{
        cout << "\nanother diag\n";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                arr[i][j] %= 6;
                cout << arr[i][j] << "\t";
            }
            cout << "\n";
        }
    }
cout << "\nDifference\t" << abs(temp1 - temp2);
return 0;
}
