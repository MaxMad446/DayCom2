// Auto-generated module | 2026-05-11T20:30:48.423600
#include <iostream>
#include <vector>

int compute_989() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
