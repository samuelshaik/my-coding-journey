#include <iostream>
using namespace std;

int main() {
    int amount, note;
    cin >> amount; 
    while (amount > 0) {
        switch (amount) {
            case 1000 ... INT_MAX:
                note = 1000;
                break;
            case 500 ... 999:
                note = 500;
                break;
            case 100 ... 499:
                note = 100;
                break;
            case 50 ... 99:
                note = 50;
                break;
            case 20 ... 49:
                note = 20;
                break;
            case 10 ... 19:
                note = 10;
                break;
            case 5 ... 9:
                note = 5;
                break;
            case 2 ... 4:
                note = 2;
                break;
            case 1:
                note = 1;
                break;
            default:
                note = 0;
        }
        int count = amount / note; 
        amount -= count * note;   
        cout << note << " x " << count << endl;
    }

    return 0;
}