// Auto-generated module | 2026-05-11T21:53:11.025406
#include <iostream>
#include <vector>

int compute_283() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
