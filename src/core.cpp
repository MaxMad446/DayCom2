// Auto-generated module | 2026-05-11T21:26:01.608682
#include <iostream>
#include <vector>

int compute_721() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
