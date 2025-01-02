// Auto-generated module | 2026-05-12T21:08:07.705451
#include <iostream>
#include <vector>

int compute_534() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_534() << std::endl;
    return 0;
}
