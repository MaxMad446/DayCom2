// Auto-generated module | 2026-05-11T20:53:12.396896
#include <iostream>
#include <vector>

int compute_459() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_459() << std::endl;
    return 0;
}
