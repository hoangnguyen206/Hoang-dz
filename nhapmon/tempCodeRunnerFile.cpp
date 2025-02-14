#include <iostream>
#include <conio.h>  // Windows (Dùng <ncurses.h> trên Linux)
#include <windows.h> // Dùng sleep() để tạo độ trễ

using namespace std;

bool gameOver;
const int width = 20;
const int height = 17;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100]; // Tọa độ thân rắn
int nTail; // Độ dài thân rắn
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw() {
    system("cls"); // Xóa màn hình console

    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) cout << "#"; // Tường bên trái

            if (i == y && j == x) cout << "O"; // Đầu rắn
            else if (i == fruitY && j == fruitX) cout << "F"; // Trái cây
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "o"; // Thân rắn
                        print = true;
                    }
                }
                if (!print) cout << " ";
            }

            if (j == width - 1) cout << "#"; // Tường bên phải
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << "\nScore: " << score << endl;
}

void Input() {
    if (_kbhit()) { // Kiểm tra có phím nào được nhấn không
        switch (_getch()) {
        case 'a': case 75: dir = LEFT; break;
        case 'd': case 77: dir = RIGHT; break;
        case 'w': case 72: dir = UP; break;
        case 's': case 80: dir = DOWN; break;
        case 'x': gameOver = true; break;
        }
    }
}

void Logic() {
    int prevX = tailX[0], prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
    case LEFT: x--; break;
    case RIGHT: x++; break;
    case UP: y--; break;
    case DOWN: y++; break;
    }

    if (x >= width || x < 0 || y >= height || y < 0) gameOver = true; // Va chạm tường
    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y) gameOver = true; // Va chạm chính mình

    if (x == fruitX && y == fruitY) { // Ăn mồi
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100); // Điều chỉnh tốc độ game
    }
    cout << "Game Over!" << endl;
    return 0;
}
