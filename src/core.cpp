// Auto-generated module | 2026-05-12T04:32:19.435385
#include <iostream>
#include <vector>

int compute_694() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
