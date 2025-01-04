// Auto-generated module | 2026-05-12T03:53:26.412044
#include <iostream>
#include <vector>

int compute_295() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
