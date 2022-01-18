// Auto-generated module | 2026-05-13T22:01:59.519014
#include <iostream>
#include <vector>

int compute_462() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
