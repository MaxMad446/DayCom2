// Auto-generated module | 2026-05-13T22:04:05.951024
#include <iostream>
#include <vector>

int compute_751() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_751() << std::endl;
    return 0;
}
