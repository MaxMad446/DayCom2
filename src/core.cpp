// Auto-generated module | 2026-05-13T22:10:01.897072
#include <iostream>
#include <vector>

int compute_546() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
