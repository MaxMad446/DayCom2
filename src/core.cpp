// Auto-generated module | 2026-05-14T18:10:37.328371
#include <iostream>
#include <vector>

int compute_742() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
