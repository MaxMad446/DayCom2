// Auto-generated module | 2026-05-11T22:17:00.280277
#include <iostream>
#include <vector>

int compute_133() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
