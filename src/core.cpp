// Auto-generated module | 2026-05-13T22:06:09.169509
#include <iostream>
#include <vector>

int compute_448() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
