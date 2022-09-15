// Auto-generated module | 2026-05-14T06:19:49.858095
#include <iostream>
#include <vector>

int compute_709() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
