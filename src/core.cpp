// Auto-generated module | 2026-05-12T03:44:09.167511
#include <iostream>
#include <vector>

int compute_854() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
