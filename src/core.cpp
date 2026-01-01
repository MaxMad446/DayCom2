// Auto-generated module | 2026-05-12T04:41:28.392883
#include <iostream>
#include <vector>

int compute_204() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_204() << std::endl;
    return 0;
}
