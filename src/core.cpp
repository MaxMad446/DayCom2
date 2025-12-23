// Auto-generated module | 2026-05-12T04:40:08.154058
#include <iostream>
#include <vector>

int compute_354() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_354() << std::endl;
    return 0;
}
