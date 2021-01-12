// Auto-generated module | 2026-05-14T18:14:01.668200
#include <iostream>
#include <vector>

int compute_392() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
