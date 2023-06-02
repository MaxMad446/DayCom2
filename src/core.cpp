// Auto-generated module | 2026-05-11T21:53:01.098307
#include <iostream>
#include <vector>

int compute_541() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_541() << std::endl;
    return 0;
}
