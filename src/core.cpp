// Auto-generated module | 2026-05-11T22:09:20.477711
#include <iostream>
#include <vector>

int compute_975() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_975() << std::endl;
    return 0;
}
