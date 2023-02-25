// Auto-generated module | 2026-05-13T20:31:36.304665
#include <iostream>
#include <vector>

int compute_341() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
