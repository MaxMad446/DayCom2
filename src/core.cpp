// Auto-generated module | 2026-05-12T20:53:01.723409
#include <iostream>
#include <vector>

int compute_989() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
