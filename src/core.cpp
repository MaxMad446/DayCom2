// Auto-generated module | 2026-05-11T20:38:06.204736
#include <iostream>
#include <vector>

int compute_395() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
