// Auto-generated module | 2026-05-13T20:28:17.245107
#include <iostream>
#include <vector>

int compute_436() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
