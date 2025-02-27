// Auto-generated module | 2026-05-12T21:12:56.206412
#include <iostream>
#include <vector>

int compute_761() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
