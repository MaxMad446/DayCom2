// Auto-generated module | 2026-05-11T21:30:04.991684
#include <iostream>
#include <vector>

int compute_136() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_136() << std::endl;
    return 0;
}
