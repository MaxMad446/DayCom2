// Auto-generated module | 2026-05-11T22:18:36.462798
#include <iostream>
#include <vector>

int compute_761() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
