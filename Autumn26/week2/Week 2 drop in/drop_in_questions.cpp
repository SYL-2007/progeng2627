#include <iostream>
using namespace std;

int main() {
   double a, b, c;
   cout << "Enter three side lengths: ";
   cin >> a >> b >> c;

   if (a + b > c && a + c > b && b + c > a) {
    cout << "The lengths can form a triangle." << endl;
    if (a == b && b == c) {
        cout << "It is an equilateral triangle." << endl;
    } else if (a == b || b == c || a == c) {
        cout << "It is an isosceles triangle." << endl;
    } else {
        cout << "It is a scalene triangle." << endl;
    }
   } else {
    cout << "The lengths cannot form a triangle." << endl;
   }

   //valid chess moves
   int x_moves[8] = {2, 1, -1, -2, -2, -1, 1, 2};
   int y_moves[8] = {1, 2, 2, 1, -1, -2, -2, -1};

   int start_x, start_y, end_x, end_y;
   cout << "What is the coordinate of the starting position? (x y): " << endl;
   cin >> start_x >> start_y;
   cout << "What is the coordinate of the ending position? (x y): " << endl;
   cin >> end_x >> end_y;

   int current_x, current_y;
   for (int i = 0; i < 8; i++) {
        current_x = start_x + x_moves[i];
        current_y = start_y + y_moves[i];
        if (current_x == end_x && current_y == end_y) {
            cout << "The move is valid." << endl;
            return 0;
        }
   }
   cout << "The move is invalid." << endl;
   return 0;

}