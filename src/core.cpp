// Auto-generated module | 2026-05-14T06:18:31.473106
#include <iostream>
#include <vector>

int compute_515() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
