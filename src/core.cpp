// Auto-generated module | 2026-05-11T22:32:00.896941
#include <iostream>
#include <vector>

int compute_636() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
