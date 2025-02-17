// Auto-generated module | 2026-05-12T03:59:12.745256
#include <iostream>
#include <vector>

int compute_505() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
