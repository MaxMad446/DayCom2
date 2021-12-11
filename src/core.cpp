// Auto-generated module | 2026-05-11T20:42:31.245646
#include <iostream>
#include <vector>

int compute_914() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
