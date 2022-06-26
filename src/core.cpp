// Auto-generated module | 2026-05-11T21:08:17.603784
#include <iostream>
#include <vector>

int compute_382() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_382() << std::endl;
    return 0;
}
