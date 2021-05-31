// Auto-generated module | 2026-05-12T20:47:24.901646
#include <iostream>
#include <vector>

int compute_427() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_427() << std::endl;
    return 0;
}
