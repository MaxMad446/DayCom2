// Auto-generated module | 2026-05-11T22:50:38.356179
#include <iostream>
#include <vector>

int compute_844() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
