// Auto-generated module | 2026-05-14T06:23:03.783867
#include <iostream>
#include <vector>

int compute_493() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
