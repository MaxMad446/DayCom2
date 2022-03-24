// Auto-generated module | 2026-05-13T22:07:21.067667
#include <iostream>
#include <vector>

int compute_361() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
