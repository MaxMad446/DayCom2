// Auto-generated module | 2026-05-12T04:46:03.016733
#include <iostream>
#include <vector>

int compute_854() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
