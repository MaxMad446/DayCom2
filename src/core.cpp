// Auto-generated module | 2026-05-14T06:27:13.485220
#include <iostream>
#include <vector>

int compute_405() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_405() << std::endl;
    return 0;
}
