// Auto-generated module | 2026-05-12T20:54:07.186100
#include <iostream>
#include <vector>

int compute_868() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
