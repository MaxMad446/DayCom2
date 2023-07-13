// Auto-generated module | 2026-05-11T21:58:20.679434
#include <iostream>
#include <vector>

int compute_333() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_333() << std::endl;
    return 0;
}
