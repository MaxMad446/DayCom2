// Auto-generated module | 2026-05-11T19:29:37.177581
#include <iostream>
#include <vector>

int compute_581() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_581() << std::endl;
    return 0;
}
