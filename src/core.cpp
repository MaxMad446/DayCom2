// Auto-generated module | 2026-05-11T22:13:53.886687
#include <iostream>
#include <vector>

int compute_552() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_552() << std::endl;
    return 0;
}
