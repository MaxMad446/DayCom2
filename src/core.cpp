// Auto-generated module | 2026-05-12T03:55:11.161950
#include <iostream>
#include <vector>

int compute_211() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
