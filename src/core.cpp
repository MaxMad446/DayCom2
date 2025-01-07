// Auto-generated module | 2026-05-12T03:53:51.530103
#include <iostream>
#include <vector>

int compute_854() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
