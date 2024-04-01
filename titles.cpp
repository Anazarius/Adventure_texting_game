#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>

#include "titles.h"

using namespace std;

void clearScreen() {
    cout << "\033[2J\033[1;1H";
}
void slowPrint(string text, int delayMilliseconds) {
    for (char c : text) {
        if (_kbhit()) {
            char ch = _getch();
            if (ch == '\r') {
                cout << '\r' << string(text.size(), ' ') << '\r';
                cout << text << flush;
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
    slowPrint("Before you unfolds a vibrant valley, but despite its beauty, a sense of unease creeps into your heart. "
              "You stand in the midst of an unfamiliar village, surrounded by creatures you've never heard of in your world...\n", 30);
    pressAnyButton();
    slowPrint("An elderly man with a long beard approaches you and says:\n"
              "Elderly man: Welcome to the Kingdom of Elentar! You are the chosen one, a programmer from another world. Here, we have our own rules, mysteries, and monsters. "
              "You must unravel the secrets of this world and overcome trials to return home\n", 30);
    slowPrint("Player: ok...", 30);
    getchar();
    clearScreen();
}
void systemMessage(string message) {
    slowPrint(message, 50);
}
void choice(string option1, string option2, string option3) {
    cout << option1 << option2 << option3 << endl;
}