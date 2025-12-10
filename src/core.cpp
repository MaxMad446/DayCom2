// Auto-generated module | 2026-05-12T04:38:13.074455
#include <iostream>
#include <vector>

int compute_947() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_947() << std::endl;
    return 0;
}
