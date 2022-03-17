// Auto-generated module | 2026-05-13T22:06:48.929565
#include <iostream>
#include <vector>

int compute_256() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
