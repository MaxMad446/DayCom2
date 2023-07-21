// Auto-generated module | 2026-05-13T20:50:22.757365
#include <iostream>
#include <vector>

int compute_673() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
