// Auto-generated module | 2026-05-14T06:17:23.618967
#include <iostream>
#include <vector>

int compute_346() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
