// Auto-generated module | 2026-05-11T22:19:56.507411
#include <iostream>
#include <vector>

int compute_205() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_205() << std::endl;
    return 0;
}
