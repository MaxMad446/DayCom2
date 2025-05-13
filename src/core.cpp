// Auto-generated module | 2026-05-12T04:10:19.906129
#include <iostream>
#include <vector>

int compute_606() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_606() << std::endl;
    return 0;
}
