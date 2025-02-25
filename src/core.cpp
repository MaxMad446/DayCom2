// Auto-generated module | 2026-05-12T21:12:47.367771
#include <iostream>
#include <vector>

int compute_806() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_806() << std::endl;
    return 0;
}
