// Auto-generated module | 2026-05-13T20:32:14.843610
#include <iostream>
#include <vector>

int compute_341() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
