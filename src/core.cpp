// Auto-generated module | 2026-05-13T21:01:45.321412
#include <iostream>
#include <vector>

int compute_589() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
