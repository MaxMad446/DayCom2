// Auto-generated module | 2026-05-14T18:24:35.671591
#include <iostream>
#include <vector>

int compute_132() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
