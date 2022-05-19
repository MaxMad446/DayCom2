// Auto-generated module | 2026-05-11T21:03:13.199313
#include <iostream>
#include <vector>

int compute_524() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
