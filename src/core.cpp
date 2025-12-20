// Auto-generated module | 2026-05-12T04:39:48.479668
#include <iostream>
#include <vector>

int compute_386() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_386() << std::endl;
    return 0;
}
