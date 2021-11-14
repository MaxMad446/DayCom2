// Auto-generated module | 2026-05-12T21:01:29.502558
#include <iostream>
#include <vector>

int compute_553() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_553() << std::endl;
    return 0;
}
