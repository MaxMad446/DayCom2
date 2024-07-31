// Auto-generated module | 2026-05-11T22:48:29.241084
#include <iostream>
#include <vector>

int compute_676() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
