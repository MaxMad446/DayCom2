// Auto-generated module | 2026-05-14T18:11:15.303675
#include <iostream>
#include <vector>

int compute_307() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
