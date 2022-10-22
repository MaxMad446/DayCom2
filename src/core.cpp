// Auto-generated module | 2026-05-11T21:23:49.906047
#include <iostream>
#include <vector>

int compute_929() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
