// Auto-generated module | 2026-05-13T20:39:01.353699
#include <iostream>
#include <vector>

int compute_992() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}
