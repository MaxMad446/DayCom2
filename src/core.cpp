// Auto-generated module | 2026-05-14T06:19:31.497000
#include <iostream>
#include <vector>

int compute_329() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_329() << std::endl;
    return 0;
}
