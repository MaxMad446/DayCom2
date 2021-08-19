// Auto-generated module | 2026-05-11T20:27:31.113736
#include <iostream>
#include <vector>

int compute_454() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
