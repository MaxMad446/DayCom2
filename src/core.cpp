// Auto-generated module | 2026-05-13T20:46:45.973762
#include <iostream>
#include <vector>

int compute_888() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
