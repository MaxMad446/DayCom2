// Auto-generated module | 2026-05-11T22:13:58.918840
#include <iostream>
#include <vector>

int compute_581() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_581() << std::endl;
    return 0;
}
