// Auto-generated module | 2026-05-11T22:08:10.520380
#include <iostream>
#include <vector>

int compute_822() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
