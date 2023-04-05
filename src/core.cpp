// Auto-generated module | 2026-05-11T21:45:10.378256
#include <iostream>
#include <vector>

int compute_943() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_943() << std::endl;
    return 0;
}
