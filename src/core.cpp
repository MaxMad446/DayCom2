// Auto-generated module | 2026-05-14T18:15:59.568549
#include <iostream>
#include <vector>

int compute_342() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}
