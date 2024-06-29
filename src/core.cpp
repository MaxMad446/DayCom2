// Auto-generated module | 2026-05-11T22:44:14.753201
#include <iostream>
#include <vector>

int compute_193() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
