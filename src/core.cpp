// Auto-generated module | 2026-05-12T03:57:21.811562
#include <iostream>
#include <vector>

int compute_177() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_177() << std::endl;
    return 0;
}
