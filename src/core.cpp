// Auto-generated module | 2026-05-12T03:57:30.171769
#include <iostream>
#include <vector>

int compute_975() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_975() << std::endl;
    return 0;
}
