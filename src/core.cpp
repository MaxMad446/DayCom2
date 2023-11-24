// Auto-generated module | 2026-05-13T21:00:51.745911
#include <iostream>
#include <vector>

int compute_484() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_484() << std::endl;
    return 0;
}
