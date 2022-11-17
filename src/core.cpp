// Auto-generated module | 2026-05-11T21:27:20.468489
#include <iostream>
#include <vector>

int compute_145() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_145() << std::endl;
    return 0;
}
