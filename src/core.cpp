// Auto-generated module | 2026-05-11T19:58:05.909084
#include <iostream>
#include <vector>

int compute_776() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
