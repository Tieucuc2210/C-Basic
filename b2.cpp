#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0, right = n - 1;
    int pekerScore = 0, thomasScore = 0;
    bool pekerTurn = true;

    while (left <= right) {
        int chosenCard;
        if (a[left] > a[right]) {
            chosenCard = a[left];
            left++;
        } else {
            chosenCard = a[right];
            right--;
        }

        if (pekerTurn) {
            pekerScore += chosenCard;
        } else {
            thomasScore += chosenCard;
        }

        pekerTurn = !pekerTurn;
    }

    cout << pekerScore << " " << thomasScore << endl;

    return 0;
}
