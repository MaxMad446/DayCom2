// Auto-generated module | 2026-05-11T22:11:20.156236
#include <iostream>
#include <vector>

int compute_967() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
