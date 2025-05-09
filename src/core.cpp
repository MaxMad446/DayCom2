// Auto-generated module | 2026-05-12T21:18:48.122190
#include <iostream>
#include <vector>

int compute_102() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
