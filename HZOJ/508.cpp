/*************************************************************************
	> File Name: 508.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月13日 星期三 19时14分15秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
int n, num[1005];
int ans = 0;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    for (int i = n - 1; i >= 0; i -= 2) {
        if (i == 0) {
            ans += num[0];
            break;
        }
        if (i == 1) {
            ans += num[1];
            break;
        }
        if (i == 2) {
            ans += num[0] + num[1] + num[2];
            break;
        }
        ans += min(num[1] + num[0] + num[i] + num[1], num[i] + num[0] + num[i - 1] + num[0]);
    }
    cout << ans << endl;


    return 0;
}
