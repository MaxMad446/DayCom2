// Auto-generated module | 2026-05-14T18:11:27.417931
#include <iostream>
#include <vector>

int compute_246() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
