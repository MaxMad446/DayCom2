// Auto-generated module | 2026-05-12T04:38:49.224641
#include <iostream>
#include <vector>

int compute_630() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_630() << std::endl;
    return 0;
}
