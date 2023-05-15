// Auto-generated module | 2026-05-11T21:50:23.325081
#include <iostream>
#include <vector>

int compute_246() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
