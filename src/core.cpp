// Auto-generated module | 2026-05-12T20:47:06.519687
#include <iostream>
#include <vector>

int compute_951() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
