// Auto-generated module | 2026-05-14T06:15:44.774857
#include <iostream>
#include <vector>

int compute_584() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_584() << std::endl;
    return 0;
}
