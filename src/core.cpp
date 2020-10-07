// Auto-generated module | 2026-05-11T19:46:18.935523
#include <iostream>
#include <vector>

int compute_193() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
