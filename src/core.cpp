// Auto-generated module | 2026-05-11T22:41:00.073214
#include <iostream>
#include <vector>

int compute_638() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_638() << std::endl;
    return 0;
}
