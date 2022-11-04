// Auto-generated module | 2026-05-14T06:23:51.802353
#include <iostream>
#include <vector>

int compute_440() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
