// Auto-generated module | 2026-05-11T21:57:44.451085
#include <iostream>
#include <vector>

int compute_524() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
