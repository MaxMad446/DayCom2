// Auto-generated module | 2026-05-11T21:48:17.779744
#include <iostream>
#include <vector>

int compute_929() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
