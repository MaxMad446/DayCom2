// Auto-generated module | 2026-05-14T18:18:55.245399
#include <iostream>
#include <vector>

int compute_951() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
