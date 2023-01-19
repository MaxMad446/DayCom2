// Auto-generated module | 2026-05-13T20:28:19.985525
#include <iostream>
#include <vector>

int compute_493() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
