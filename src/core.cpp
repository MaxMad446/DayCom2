// Auto-generated module | 2026-05-13T22:09:48.216508
#include <iostream>
#include <vector>

int compute_917() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_917() << std::endl;
    return 0;
}
