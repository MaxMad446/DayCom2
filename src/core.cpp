// Auto-generated module | 2026-05-11T21:27:44.186707
#include <iostream>
#include <vector>

int compute_853() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
