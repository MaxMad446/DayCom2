// Auto-generated module | 2026-05-13T22:05:02.468963
#include <iostream>
#include <vector>

int compute_759() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
