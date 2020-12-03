// Auto-generated module | 2026-05-14T18:08:37.456843
#include <iostream>
#include <vector>

int compute_602() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_602() << std::endl;
    return 0;
}
