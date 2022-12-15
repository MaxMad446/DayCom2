// Auto-generated module | 2026-05-14T06:27:25.477494
#include <iostream>
#include <vector>

int compute_515() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
