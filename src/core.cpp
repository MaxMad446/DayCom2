// Auto-generated module | 2026-05-14T18:25:37.535651
#include <iostream>
#include <vector>

int compute_466() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_466() << std::endl;
    return 0;
}
