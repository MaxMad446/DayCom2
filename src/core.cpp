// Auto-generated module | 2026-05-13T20:34:18.138788
#include <iostream>
#include <vector>

int compute_487() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_487() << std::endl;
    return 0;
}
