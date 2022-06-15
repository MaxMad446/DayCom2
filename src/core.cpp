// Auto-generated module | 2026-05-11T21:06:51.354050
#include <iostream>
#include <vector>

int compute_282() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
