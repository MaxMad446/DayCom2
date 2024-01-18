// Auto-generated module | 2026-05-14T18:18:29.928386
#include <iostream>
#include <vector>

int compute_541() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_541() << std::endl;
    return 0;
}
