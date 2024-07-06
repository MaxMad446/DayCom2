// Auto-generated module | 2026-05-11T22:45:09.077919
#include <iostream>
#include <vector>

int compute_587() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
