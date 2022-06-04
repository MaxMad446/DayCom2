// Auto-generated module | 2026-05-14T06:11:28.027226
#include <iostream>
#include <vector>

int compute_164() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
