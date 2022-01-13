// Auto-generated module | 2026-05-13T22:01:28.246312
#include <iostream>
#include <vector>

int compute_874() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}
