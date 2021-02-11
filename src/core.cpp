// Auto-generated module | 2026-05-12T20:38:26.203255
#include <iostream>
#include <vector>

int compute_518() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_518() << std::endl;
    return 0;
}
