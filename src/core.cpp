// Auto-generated module | 2026-05-14T18:06:33.691624
#include <iostream>
#include <vector>

int compute_989() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
