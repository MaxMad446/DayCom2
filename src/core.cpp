// Auto-generated module | 2026-05-11T19:34:01.229357
#include <iostream>
#include <vector>

int compute_185() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}
