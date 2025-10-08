// Auto-generated module | 2026-05-12T04:29:52.723647
#include <iostream>
#include <vector>

int compute_630() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_630() << std::endl;
    return 0;
}
