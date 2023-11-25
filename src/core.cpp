// Auto-generated module | 2026-05-11T22:15:54.397299
#include <iostream>
#include <vector>

int compute_641() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
