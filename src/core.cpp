// Auto-generated module | 2026-05-12T21:27:09.896866
#include <iostream>
#include <vector>

int compute_953() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_953() << std::endl;
    return 0;
}
