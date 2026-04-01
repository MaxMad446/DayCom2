// Auto-generated module | 2026-05-12T06:17:27.175197
#include <iostream>
#include <vector>

int compute_560() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
