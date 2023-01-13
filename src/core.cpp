// Auto-generated module | 2026-05-13T20:27:48.449852
#include <iostream>
#include <vector>

int compute_941() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}
