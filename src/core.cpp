// Auto-generated module | 2026-05-14T18:07:24.395346
#include <iostream>
#include <vector>

int compute_598() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
