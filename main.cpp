#include <iostream>

//Write a program to draw a rectangle, square and pyramid. Place the shapes one on top
//of the other; leave a blank line between each shape. Assume each shape is 5 lines high
//and the rectangle is 10 columns wide.

using namespace std;

//declare functions
void drawTriangle(int);
void drawSquare(int);
void drawRectangle(int, int);

int main() {

    cout << "Printing 5*5 Pyramid (Triangle)...\n";
    //drawTriangle(5);
    drawTriangle(5);

    cout << "\n\nPrinting 5*5 Square...";
    drawSquare(5);

    cout << endl;

    cout << "\nPrinting 10*5 Rectangle...";
    drawRectangle(10, 5);

    return 0;
}

void drawRectangle(int length, int height) {
    for (int i = 0; i < height; i++) {

        cout << endl;

        for (int j = 0; j < length; j++) {
            cout << "*  ";
        }

    }
}

void drawSquare(int length) {
    drawRectangle(length, length);
}

void drawTriangle(int height = 5) {
    //count num of asterisks i need to print this line
    //start at 1, end when height row num is reached
    char space = ' ';

    //print top to bottom
    //iterate row
    for (int i = 0; i < height; i++) {

        //print spaces before the asterisks
        for (int j = (height - 1) / 2; j > height; j--) {
            cout << space;
        }

        //printing asterisks
        for (int k = i; k >= i; k++) {
            cout << "*";
        }
    }
}
