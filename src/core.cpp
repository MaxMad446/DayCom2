// Auto-generated module | 2026-05-14T18:12:32.025140
#include <iostream>
#include <vector>

int compute_292() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
