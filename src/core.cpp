// Auto-generated module | 2026-05-14T18:18:56.066447
#include <iostream>
#include <vector>

int compute_790() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_790() << std::endl;
    return 0;
}
