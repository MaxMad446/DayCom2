// Auto-generated module | 2026-05-12T21:37:23.232406
#include <iostream>
#include <vector>

int compute_550() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
