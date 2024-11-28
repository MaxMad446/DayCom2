// Auto-generated module | 2026-05-12T03:48:25.980286
#include <iostream>
#include <vector>

int compute_616() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
