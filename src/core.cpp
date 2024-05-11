// Auto-generated module | 2026-05-14T18:27:49.186248
#include <iostream>
#include <vector>

int compute_845() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
