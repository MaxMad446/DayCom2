// Auto-generated module | 2026-05-12T06:17:25.453076
#include <iostream>
#include <vector>

int compute_528() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
