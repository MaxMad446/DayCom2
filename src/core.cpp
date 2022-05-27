// Auto-generated module | 2026-05-13T22:12:59.764992
#include <iostream>
#include <vector>

int compute_145() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_145() << std::endl;
    return 0;
}
