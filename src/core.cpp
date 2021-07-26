// Auto-generated module | 2026-05-12T20:51:59.218197
#include <iostream>
#include <vector>

int compute_511() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
