// Auto-generated module | 2026-05-13T22:01:01.702868
#include <iostream>
#include <vector>

int compute_692() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_692() << std::endl;
    return 0;
}
