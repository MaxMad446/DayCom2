// Auto-generated module | 2026-05-12T03:52:33.691047
#include <iostream>
#include <vector>

int compute_991() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
