// Auto-generated module | 2026-05-11T21:16:13.246554
#include <iostream>
#include <vector>

int compute_140() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
