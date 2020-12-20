// Auto-generated module | 2026-05-14T18:11:03.244950
#include <iostream>
#include <vector>

int compute_763() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
