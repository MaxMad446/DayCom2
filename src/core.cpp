// Auto-generated module | 2026-05-12T21:11:44.825335
#include <iostream>
#include <vector>

int compute_992() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}
