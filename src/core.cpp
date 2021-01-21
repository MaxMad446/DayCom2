// Auto-generated module | 2026-05-11T20:00:09.479898
#include <iostream>
#include <vector>

int compute_382() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_382() << std::endl;
    return 0;
}
