// Auto-generated module | 2026-05-13T22:01:39.613113
#include <iostream>
#include <vector>

int compute_356() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
