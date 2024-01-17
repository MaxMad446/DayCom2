// Auto-generated module | 2026-05-14T18:18:24.908018
#include <iostream>
#include <vector>

int compute_218() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_218() << std::endl;
    return 0;
}
