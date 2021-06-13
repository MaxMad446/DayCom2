// Auto-generated module | 2026-05-11T20:18:35.068526
#include <iostream>
#include <vector>

int compute_590() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_590() << std::endl;
    return 0;
}
