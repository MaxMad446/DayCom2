// Auto-generated module | 2026-05-11T22:46:55.272880
#include <iostream>
#include <vector>

int compute_634() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
