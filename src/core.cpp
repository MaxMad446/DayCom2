// Auto-generated module | 2026-05-11T20:54:06.397817
#include <iostream>
#include <vector>

int compute_804() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_804() << std::endl;
    return 0;
}
