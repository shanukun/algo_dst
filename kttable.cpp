// https://www.codechef.com/problems/KTTABLE
#include <iostream>
using namespace std;

int calcFinishNo(long long int noOfStudent,
                 long long int timeSlotArray[],
                 long long int timeTakenArray[]) {

    long long int i, difference;
    long long int count = 0;

    if (timeSlotArray[0] >= timeTakenArray[0])
        count++;

    for(i = 0; i < noOfStudent - 1; i++) {
        difference = timeSlotArray[i + 1] - timeSlotArray[i];
        if (difference >= timeTakenArray[i + 1])
            count++;
    }

    return count;
}

int main() {
    long long int i, j;
    long long int testCase;
    long long int noOfStudent;

    cin >> testCase;

    while(testCase--) {
        cin >> noOfStudent;
        
        long long int timeSlotArray[noOfStudent];
        long long int timeTakenArray[noOfStudent];

        for (i = 0; i < noOfStudent; i++) {
            cin >> timeSlotArray[i];
        }

        for (j = 0; j < noOfStudent; j++) {
            cin >> timeTakenArray[j];
        }

        cout << calcFinishNo(noOfStudent, timeSlotArray, timeTakenArray);
        cout << endl;
    }
}
