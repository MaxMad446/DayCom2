// Auto-generated module | 2026-05-11T22:19:01.078962
#include <iostream>
#include <vector>

int compute_837() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
