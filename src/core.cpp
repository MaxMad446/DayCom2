// Auto-generated module | 2026-05-12T04:33:24.225621
#include <iostream>
#include <vector>

int compute_755() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
