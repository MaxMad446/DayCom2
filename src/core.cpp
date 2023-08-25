// Auto-generated module | 2026-05-11T22:03:44.579787
#include <iostream>
#include <vector>

int compute_852() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
