// Auto-generated module | 2026-05-11T19:47:42.019373
#include <iostream>
#include <vector>

int compute_886() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_886() << std::endl;
    return 0;
}
