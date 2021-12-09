// Auto-generated module | 2026-05-11T20:42:13.487898
#include <iostream>
#include <vector>

int compute_103() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_103() << std::endl;
    return 0;
}
