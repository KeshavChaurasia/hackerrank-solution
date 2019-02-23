// problem statement link : https://www.hackerrank.com/challenges/diagonal-difference/problem

#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
    int mainDiagnolSum = 0;
    int notMainDiagnolSum = 0;
    int arrSize = arr.size();
    for(int i=0;i<arrSize;i++){
        mainDiagnolSum += arr[i][i];
        notMainDiagnolSum += arr[i][arrSize-1-i];
    }
    return abs(mainDiagnolSum-notMainDiagnolSum);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
