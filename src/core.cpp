// Auto-generated module | 2026-05-11T22:08:00.024002
#include <iostream>
#include <vector>

int compute_239() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
