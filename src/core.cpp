// Auto-generated module | 2026-05-11T20:31:28.572958
#include <iostream>
#include <vector>

int compute_436() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
