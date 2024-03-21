// Auto-generated module | 2026-05-14T18:23:36.651219
#include <iostream>
#include <vector>

int compute_524() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
