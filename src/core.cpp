// Auto-generated module | 2026-05-14T18:18:18.032910
#include <iostream>
#include <vector>

int compute_922() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_922() << std::endl;
    return 0;
}
