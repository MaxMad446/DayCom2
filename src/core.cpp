// Auto-generated module | 2026-05-12T20:39:07.592044
#include <iostream>
#include <vector>

int compute_742() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
