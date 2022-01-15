// Auto-generated module | 2026-05-11T20:46:59.886269
#include <iostream>
#include <vector>

int compute_507() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
