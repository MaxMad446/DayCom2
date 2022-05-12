// Auto-generated module | 2026-05-13T22:11:41.156710
#include <iostream>
#include <vector>

int compute_933() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_933() << std::endl;
    return 0;
}
