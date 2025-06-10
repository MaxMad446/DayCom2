// Auto-generated module | 2026-05-12T21:21:33.730190
#include <iostream>
#include <vector>

int compute_761() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
