// Auto-generated module | 2026-05-14T18:04:29.585043
#include <iostream>
#include <vector>

int compute_359() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
