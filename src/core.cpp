// Auto-generated module | 2026-05-13T20:51:32.531134
#include <iostream>
#include <vector>

int compute_742() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
