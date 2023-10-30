// Auto-generated module | 2026-05-13T20:58:46.976934
#include <iostream>
#include <vector>

int compute_932() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
