// Auto-generated module | 2026-05-11T20:19:45.529086
#include <iostream>
#include <vector>

int compute_786() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_786() << std::endl;
    return 0;
}
