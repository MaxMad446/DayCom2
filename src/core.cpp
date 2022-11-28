// Auto-generated module | 2026-05-14T06:25:55.308139
#include <iostream>
#include <vector>

int compute_745() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_745() << std::endl;
    return 0;
}
