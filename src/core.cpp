// Auto-generated module | 2026-05-12T21:09:14.591307
#include <iostream>
#include <vector>

int compute_439() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_439() << std::endl;
    return 0;
}
