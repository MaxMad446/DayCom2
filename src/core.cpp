// Auto-generated module | 2026-05-12T04:28:02.178333
#include <iostream>
#include <vector>

int compute_878() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
