// Auto-generated module | 2026-05-11T21:12:54.774012
#include <iostream>
#include <vector>

int compute_293() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_293() << std::endl;
    return 0;
}
