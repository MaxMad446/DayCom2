// Auto-generated module | 2026-05-11T19:46:55.950575
#include <iostream>
#include <vector>

int compute_199() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
