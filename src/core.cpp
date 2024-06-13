// Auto-generated module | 2026-05-11T22:42:06.732910
#include <iostream>
#include <vector>

int compute_991() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
