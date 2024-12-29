// Auto-generated module | 2026-05-12T03:52:41.014548
#include <iostream>
#include <vector>

int compute_316() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
