// Auto-generated module | 2026-05-13T22:09:35.155927
#include <iostream>
#include <vector>

int compute_321() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_321() << std::endl;
    return 0;
}
