#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>

#include "titles.h"

using namespace std;

void slowPrint(string text, int delayMilliseconds) {
    for (char c : text) {
        if (_kbhit()) {
            char ch = _getch();
            if (ch == '\r') {
                cout << text << endl;
                return;
            }
        }

        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delayMilliseconds));
    }
}
void pressAnyButton() {
    slowPrint("Press any button...\n", 30);
    getchar();
}
void startTitle() {
    slowPrint("Waking up from your usual slumber, you realize that your hands no longer find the familiar keyboard keys, and your eyes don't see the usual monitor. "
              "Your legs no longer step on your familiar rug, instead, there's something soft and lifeless beneath you. "
              "Glancing around, you understand that you are in a strange world where flaming torches float in the air, and the scent of magic lingers...\n", 30);
    pressAnyButton();
}

void dialog(string option1, string option2, string option3) {
    cout << option1 << endl;
}