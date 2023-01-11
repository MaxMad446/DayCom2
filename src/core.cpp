// Auto-generated module | 2026-05-11T21:34:30.059061
#include <iostream>
#include <vector>

int compute_101() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
