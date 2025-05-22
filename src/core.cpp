// Auto-generated module | 2026-05-12T04:11:32.490097
#include <iostream>
#include <vector>

int compute_917() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_917() << std::endl;
    return 0;
}
