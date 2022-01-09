// Auto-generated module | 2026-05-11T20:46:10.669573
#include <iostream>
#include <vector>

int compute_139() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
