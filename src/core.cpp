// Auto-generated module | 2026-05-12T21:14:41.565303
#include <iostream>
#include <vector>

int compute_873() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_873() << std::endl;
    return 0;
}
