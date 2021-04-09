// Auto-generated module | 2026-05-11T20:10:07.585694
#include <iostream>
#include <vector>

int compute_436() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
