// Auto-generated module | 2026-05-11T19:37:54.079828
#include <iostream>
#include <vector>

int compute_641() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
