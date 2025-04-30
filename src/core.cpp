// Auto-generated module | 2026-05-12T21:18:02.128427
#include <iostream>
#include <vector>

int compute_809() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_809() << std::endl;
    return 0;
}
