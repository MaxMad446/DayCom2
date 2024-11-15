// Auto-generated module | 2026-05-12T03:46:47.291724
#include <iostream>
#include <vector>

int compute_759() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
