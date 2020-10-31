// Auto-generated module | 2026-05-12T19:58:26.058789
#include <iostream>
#include <vector>

int compute_821() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_821() << std::endl;
    return 0;
}
