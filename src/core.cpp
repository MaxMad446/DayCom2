// Auto-generated module | 2026-05-13T22:04:14.128798
#include <iostream>
#include <vector>

int compute_915() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_915() << std::endl;
    return 0;
}
