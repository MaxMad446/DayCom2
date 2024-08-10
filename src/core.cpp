// Auto-generated module | 2026-05-11T22:49:46.504870
#include <iostream>
#include <vector>

int compute_361() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
