// Auto-generated module | 2026-05-11T20:07:17.618774
#include <iostream>
#include <vector>

int compute_154() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_154() << std::endl;
    return 0;
}
