// Auto-generated module | 2026-05-13T20:36:16.965387
#include <iostream>
#include <vector>

int compute_616() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
