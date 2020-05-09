// Auto-generated module | 2026-05-11T19:26:28.220430
#include <iostream>
#include <vector>

int compute_387() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_387() << std::endl;
    return 0;
}
