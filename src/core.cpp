// Auto-generated module | 2026-05-14T06:26:07.176618
#include <iostream>
#include <vector>

int compute_942() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}
