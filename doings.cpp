#include <iostream>

#include "doings.h"
#include "titles.h"

using namespace std;


void Doings::talkToElderyMen() {
    slowPrint("You decided to approach the old man and talk to him. From his expression, it was clear that he was ready to answer all the questions that interested you.", 30);
}
void Doings::goInForest() {
    slowPrint("As you head towards the forest, you notice a book lying next to the path. It was a guidebook for this country! You are very lucky!", 30);
}
void Doings::killYourSelf() {
    slowPrint("You thought it was all a dream, and pinches didn't help. You decided that by killing yourself in the dream, you would wake up. You picked up the scythe lying on the table and slit your throat. Unfortunately, you didn't wake up. The end!", 30);
}