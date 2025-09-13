// Auto-generated module | 2026-05-12T04:26:41.743949
#include <iostream>
#include <vector>

int compute_746() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
