// Auto-generated module | 2026-05-12T21:24:44.961382
#include <iostream>
#include <vector>

int compute_791() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_791() << std::endl;
    return 0;
}
