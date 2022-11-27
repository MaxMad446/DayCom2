// Auto-generated module | 2026-05-11T21:28:31.653969
#include <iostream>
#include <vector>

int compute_382() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_382() << std::endl;
    return 0;
}
