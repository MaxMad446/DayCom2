// Auto-generated module | 2026-05-12T21:27:51.379962
#include <iostream>
#include <vector>

int compute_304() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
