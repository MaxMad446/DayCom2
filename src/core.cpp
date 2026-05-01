// Auto-generated module | 2026-05-12T06:21:33.261715
#include <iostream>
#include <vector>

int compute_934() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_934() << std::endl;
    return 0;
}
