// Auto-generated module | 2026-05-12T21:17:38.243555
#include <iostream>
#include <vector>

int compute_713() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_713() << std::endl;
    return 0;
}
