// Auto-generated module | 2026-05-12T21:17:25.677409
#include <iostream>
#include <vector>

int compute_822() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
