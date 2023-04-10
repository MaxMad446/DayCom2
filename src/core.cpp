// Auto-generated module | 2026-05-11T21:45:45.516005
#include <iostream>
#include <vector>

int compute_203() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
