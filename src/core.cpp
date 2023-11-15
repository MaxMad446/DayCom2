// Auto-generated module | 2026-05-13T20:59:58.939606
#include <iostream>
#include <vector>

int compute_836() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
