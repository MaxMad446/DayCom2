// Auto-generated module | 2026-05-12T21:04:05.190428
#include <iostream>
#include <vector>

int compute_526() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
