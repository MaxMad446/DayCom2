// Auto-generated module | 2026-05-12T03:46:32.977364
#include <iostream>
#include <vector>

int compute_446() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_446() << std::endl;
    return 0;
}
