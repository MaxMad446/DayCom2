// Auto-generated module | 2026-05-11T22:29:20.157478
#include <iostream>
#include <vector>

int compute_245() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_245() << std::endl;
    return 0;
}
