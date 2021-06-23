// Auto-generated module | 2026-05-11T20:19:56.443061
#include <iostream>
#include <vector>

int compute_488() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
