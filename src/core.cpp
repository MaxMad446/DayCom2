// Auto-generated module | 2026-05-12T20:52:48.157419
#include <iostream>
#include <vector>

int compute_789() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_789() << std::endl;
    return 0;
}
