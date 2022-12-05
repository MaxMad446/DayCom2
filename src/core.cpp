// Auto-generated module | 2026-05-14T06:26:30.607482
#include <iostream>
#include <vector>

int compute_455() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
