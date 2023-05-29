// Auto-generated module | 2026-05-13T20:39:16.905068
#include <iostream>
#include <vector>

int compute_679() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
