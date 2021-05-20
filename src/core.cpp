// Auto-generated module | 2026-05-11T20:15:16.475703
#include <iostream>
#include <vector>

int compute_224() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
