// Auto-generated module | 2026-05-14T18:18:45.051875
#include <iostream>
#include <vector>

int compute_697() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
