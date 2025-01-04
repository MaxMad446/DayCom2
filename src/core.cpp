// Auto-generated module | 2026-05-12T21:08:18.151317
#include <iostream>
#include <vector>

int compute_202() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
