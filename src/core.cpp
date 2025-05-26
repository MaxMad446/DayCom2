// Auto-generated module | 2026-05-12T21:20:18.589634
#include <iostream>
#include <vector>

int compute_193() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
