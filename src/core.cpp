// Auto-generated module | 2026-05-11T19:49:04.541090
#include <iostream>
#include <vector>

int compute_932() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
