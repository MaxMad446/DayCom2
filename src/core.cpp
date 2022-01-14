// Auto-generated module | 2026-05-13T22:01:38.131645
#include <iostream>
#include <vector>

int compute_560() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
