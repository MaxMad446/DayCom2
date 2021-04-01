// Auto-generated module | 2026-05-12T21:38:08.594570
#include <iostream>
#include <vector>

int compute_931() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_931() << std::endl;
    return 0;
}
