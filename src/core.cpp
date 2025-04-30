// Auto-generated module | 2026-05-12T04:08:42.643152
#include <iostream>
#include <vector>

int compute_505() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
