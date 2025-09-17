//  1 4 5
//  5 * 1
//  4 * 2
//  1 * 3
//  max is 8

//  4
// 9 14 7 11       
// 5
// 14 18 3 1 7      
// 6
// 18 10 16 13 15 2 
// 0

// correct

// 28
// 28
// 50

// wrong

// 18
// 28
// 40

// “Calculate the area of the largest rectangle in a histogram that is aligned at the common base line.”


// left start  - 1   and right start n

//  but code start 0 to n - 1
//  so  (right - 1) - ((left + 1) - 1)

// right - left - 1  


//  4
// 9 14 7 11  

// left = [-1, 0, -1, 2]
// right = [2, 2, 4, 4]



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int n;
        cin >> n;
        if (n == 0) break; 

        vector<long long> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        vector<int> left(n), right(n);

   
        left[0] = -1;
        for (int i = 1; i < n; i++) {
            int j = i - 1;
            while (j >= 0 && heights[j] >= heights[i]) {
                j = left[j]; 
            }
            left[i] = j;
        }


        right[n - 1] = n;
        for (int i = n - 2; i >= 0; i--) {
            int j = i + 1;
            while (j < n && heights[j] >= heights[i]) {
                j = right[j]; 
            }
            right[i] = j;
        }


        long long max_area = 0;
        for (int i = 0; i < n; i++) {
            long long width = right[i] - left[i] - 1;
            long long area = heights[i] * width;
            max_area = max(max_area, area);
        }

        cout << max_area << "\n";
    }

    return 0;
}





