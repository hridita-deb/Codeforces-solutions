/* meal এর জন্য খরচ করবে : 8 3 9 2 4 5
budget :                  5 3 1 4 5 10
difference:              -3 0-8 2 1 5

minimum 2 জন মিলে ১টি Group বানাতে হবে & group সংখ্যা maximum হতে হবে। সবথেকে -ve কে সবথেকে +ve ই বাঁচাতে পারবে  so we have to sort it. তাও যদি  না বাঁচাতে পারে, skip করবো।
*/


#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > khoroch(n);
        vector < int > budget(n);
        vector < int > d;


        for (int i = 0; i < n; i++)
        {
            cin >> khoroch[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> budget[i];
        }
        for (int i = 0; i < n; i++)
        {
            d.push_back(budget[i] - khoroch[i]);
        }

        sort(d.begin(), d.end());

        int left = 0, right = n - 1;
        int day = 0;
        while (left < right) {

            if (d[left] + d[right] < 0) {
                left++;
            }
            else {
                day++;
                left++;
                right--;
            }
        }

        cout << day << endl;

    }




}
