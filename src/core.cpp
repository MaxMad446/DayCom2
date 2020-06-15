// Auto-generated module | 2026-05-11T19:31:14.291027
#include <iostream>
#include <vector>

int compute_809() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_809() << std::endl;
    return 0;
}
