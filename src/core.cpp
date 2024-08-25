// Auto-generated module | 2026-05-11T22:51:36.835983
#include <iostream>
#include <vector>

int compute_211() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
