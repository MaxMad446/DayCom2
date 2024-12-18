// Auto-generated module | 2026-05-12T03:51:07.429180
#include <iostream>
#include <vector>

int compute_289() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_289() << std::endl;
    return 0;
}
