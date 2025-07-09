// Auto-generated module | 2026-05-12T21:24:15.314273
#include <iostream>
#include <vector>

int compute_227() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
