// Auto-generated module | 2026-05-14T18:03:01.995168
#include <iostream>
#include <vector>

int compute_560() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
