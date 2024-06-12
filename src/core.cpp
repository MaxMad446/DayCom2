// Auto-generated module | 2026-05-11T22:42:03.135965
#include <iostream>
#include <vector>

int compute_191() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
