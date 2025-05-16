// Auto-generated module | 2026-05-12T04:10:48.326405
#include <iostream>
#include <vector>

int compute_376() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
