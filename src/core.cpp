// Auto-generated module | 2026-05-14T06:25:23.328562
#include <iostream>
#include <vector>

int compute_845() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
