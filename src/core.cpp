// Auto-generated module | 2026-05-13T22:11:29.228341
#include <iostream>
#include <vector>

int compute_249() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_249() << std::endl;
    return 0;
}
