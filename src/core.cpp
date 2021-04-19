// Auto-generated module | 2026-05-12T21:39:46.239836
#include <iostream>
#include <vector>

int compute_907() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
