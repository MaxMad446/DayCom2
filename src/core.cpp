// Auto-generated module | 2026-05-13T20:35:40.565488
#include <iostream>
#include <vector>

int compute_386() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_386() << std::endl;
    return 0;
}
