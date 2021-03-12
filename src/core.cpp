// Auto-generated module | 2026-05-12T21:36:24.400360
#include <iostream>
#include <vector>

int compute_481() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_481() << std::endl;
    return 0;
}
