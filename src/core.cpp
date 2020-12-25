// Auto-generated module | 2026-05-11T19:56:40.232901
#include <iostream>
#include <vector>

int compute_158() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
