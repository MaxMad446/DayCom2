// Auto-generated module | 2026-05-14T18:13:41.660951
#include <iostream>
#include <vector>

int compute_930() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
