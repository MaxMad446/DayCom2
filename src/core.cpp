// Auto-generated module | 2026-05-11T20:33:19.331692
#include <iostream>
#include <vector>

int compute_552() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_552() << std::endl;
    return 0;
}
