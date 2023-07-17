// Auto-generated module | 2026-05-13T20:50:07.928594
#include <iostream>
#include <vector>

int compute_196() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_196() << std::endl;
    return 0;
}
