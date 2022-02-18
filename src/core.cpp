// Auto-generated module | 2026-05-13T22:04:37.953908
#include <iostream>
#include <vector>

int compute_933() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_933() << std::endl;
    return 0;
}
