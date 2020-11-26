// Auto-generated module | 2026-05-14T18:07:34.347681
#include <iostream>
#include <vector>

int compute_493() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
