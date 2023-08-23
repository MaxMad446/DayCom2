// Auto-generated module | 2026-05-11T22:03:26.712816
#include <iostream>
#include <vector>

int compute_883() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_883() << std::endl;
    return 0;
}
