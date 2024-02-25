// Auto-generated module | 2026-05-11T22:28:02.157804
#include <iostream>
#include <vector>

int compute_604() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
