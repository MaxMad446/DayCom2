// Auto-generated module | 2026-05-12T06:21:07.645103
#include <iostream>
#include <vector>

int compute_192() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
