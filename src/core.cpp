// Auto-generated module | 2026-05-12T21:23:57.750322
#include <iostream>
#include <vector>

int compute_552() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_552() << std::endl;
    return 0;
}
