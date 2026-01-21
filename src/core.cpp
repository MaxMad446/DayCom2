// Auto-generated module | 2026-05-12T04:44:07.624345
#include <iostream>
#include <vector>

int compute_914() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
