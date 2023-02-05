// Auto-generated module | 2026-05-13T20:29:55.348101
#include <iostream>
#include <vector>

int compute_256() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
