// Auto-generated module | 2026-05-12T04:26:57.346929
#include <iostream>
#include <vector>

int compute_619() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
