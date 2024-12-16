// Auto-generated module | 2026-05-12T03:50:47.462915
#include <iostream>
#include <vector>

int compute_410() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
