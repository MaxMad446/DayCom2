// Auto-generated module | 2026-05-14T06:13:57.463782
#include <iostream>
#include <vector>

int compute_274() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
