// Auto-generated module | 2026-05-14T18:24:09.568032
#include <iostream>
#include <vector>

int compute_641() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
