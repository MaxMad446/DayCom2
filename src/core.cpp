// Auto-generated module | 2026-05-12T04:23:58.873464
#include <iostream>
#include <vector>

int compute_986() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
