// Auto-generated module | 2026-05-14T18:05:26.218683
#include <iostream>
#include <vector>

int compute_796() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_796() << std::endl;
    return 0;
}
