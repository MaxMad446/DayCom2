// Auto-generated module | 2026-05-11T22:18:07.783117
#include <iostream>
#include <vector>

int compute_472() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_472() << std::endl;
    return 0;
}
