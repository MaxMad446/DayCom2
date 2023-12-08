// Auto-generated module | 2026-05-11T22:17:28.344504
#include <iostream>
#include <vector>

int compute_719() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
