// Auto-generated module | 2026-05-12T03:40:55.389561
#include <iostream>
#include <vector>

int compute_663() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_663() << std::endl;
    return 0;
}
