// Auto-generated module | 2026-05-11T22:32:06.863020
#include <iostream>
#include <vector>

int compute_891() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
