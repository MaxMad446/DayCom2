// Auto-generated module | 2026-05-12T21:26:55.369018
#include <iostream>
#include <vector>

int compute_436() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
