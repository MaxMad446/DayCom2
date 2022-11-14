// Auto-generated module | 2026-05-14T06:24:47.094857
#include <iostream>
#include <vector>

int compute_803() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_803() << std::endl;
    return 0;
}
