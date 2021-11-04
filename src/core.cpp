// Auto-generated module | 2026-05-11T20:37:30.329204
#include <iostream>
#include <vector>

int compute_703() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
