// Auto-generated module | 2026-05-12T03:59:34.345968
#include <iostream>
#include <vector>

int compute_521() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
