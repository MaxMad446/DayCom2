// Auto-generated module | 2026-05-14T18:21:28.270026
#include <iostream>
#include <vector>

int compute_481() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_481() << std::endl;
    return 0;
}
