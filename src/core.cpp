// Auto-generated module | 2026-05-12T21:38:48.621991
#include <iostream>
#include <vector>

int compute_806() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_806() << std::endl;
    return 0;
}
