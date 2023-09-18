// Auto-generated module | 2026-05-11T22:06:51.878504
#include <iostream>
#include <vector>

int compute_731() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_731() << std::endl;
    return 0;
}
