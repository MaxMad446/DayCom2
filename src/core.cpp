// Auto-generated module | 2026-05-11T21:58:07.182482
#include <iostream>
#include <vector>

int compute_923() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
