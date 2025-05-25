// Auto-generated module | 2026-05-12T04:11:49.478558
#include <iostream>
#include <vector>

int compute_638() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_638() << std::endl;
    return 0;
}
