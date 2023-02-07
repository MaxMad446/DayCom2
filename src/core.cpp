// Auto-generated module | 2026-05-11T21:37:58.169678
#include <iostream>
#include <vector>

int compute_544() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
