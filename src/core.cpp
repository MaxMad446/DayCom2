// Auto-generated module | 2026-05-14T18:22:32.925632
#include <iostream>
#include <vector>

int compute_505() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
