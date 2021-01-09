// Auto-generated module | 2026-05-12T20:35:44.900737
#include <iostream>
#include <vector>

int compute_979() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_979() << std::endl;
    return 0;
}
