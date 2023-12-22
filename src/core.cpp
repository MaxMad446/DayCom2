// Auto-generated module | 2026-05-11T22:19:22.537359
#include <iostream>
#include <vector>

int compute_651() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
