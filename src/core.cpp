// Auto-generated module | 2026-05-13T22:06:54.519906
#include <iostream>
#include <vector>

int compute_697() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
