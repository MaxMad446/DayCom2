// Auto-generated module | 2026-05-11T22:39:55.216808
#include <iostream>
#include <vector>

int compute_366() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
