// Auto-generated module | 2026-05-11T20:31:38.972653
#include <iostream>
#include <vector>

int compute_979() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_979() << std::endl;
    return 0;
}
