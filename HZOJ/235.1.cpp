/*************************************************************************
	> File Name: 235.2.cpp
	> Author: lzp
	> Mail: 
	> Created Time: Sat Sep 12 19:09:37 2020
	> Source: 
 ************************************************************************/

#include<iostream>
using namespace std;
int n, cnt, arr[1000];

void print() {
    for (int i = 0; i < cnt; i++) {
        if (i) cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return ;
}

void func(int s) {
    for (int i = s; i <= n; i++) {
        arr[cnt++] = i;
        print();
        func(i + 1);
        cnt--;
    }
    return ;
}

int main() {
    cin >> n;
    func(1);
    return 0;
}
