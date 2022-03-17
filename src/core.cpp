// Auto-generated module | 2026-05-13T22:06:45.688838
#include <iostream>
#include <vector>

int compute_891() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
