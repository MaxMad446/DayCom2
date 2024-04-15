// Auto-generated module | 2026-05-14T18:25:36.530651
#include <iostream>
#include <vector>

int compute_605() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
