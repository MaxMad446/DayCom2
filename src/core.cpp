// Auto-generated module | 2026-05-14T18:25:48.736300
#include <iostream>
#include <vector>

int compute_493() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
