// Auto-generated module | 2026-05-12T03:54:17.852061
#include <iostream>
#include <vector>

int compute_210() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}
