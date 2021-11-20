// Auto-generated module | 2026-05-11T20:39:45.962045
#include <iostream>
#include <vector>

int compute_175() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_175() << std::endl;
    return 0;
}
