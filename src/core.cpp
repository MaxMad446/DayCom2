// Auto-generated module | 2026-05-11T22:15:11.432325
#include <iostream>
#include <vector>

int compute_465() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
