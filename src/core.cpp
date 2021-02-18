// Auto-generated module | 2026-05-12T20:39:05.914034
#include <iostream>
#include <vector>

int compute_174() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
