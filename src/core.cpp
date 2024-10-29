// Auto-generated module | 2026-05-12T03:44:36.233250
#include <iostream>
#include <vector>

int compute_260() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
