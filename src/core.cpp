// Auto-generated module | 2026-05-12T04:31:52.178689
#include <iostream>
#include <vector>

int compute_957() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_957() << std::endl;
    return 0;
}
