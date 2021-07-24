// Auto-generated module | 2026-05-11T20:24:09.454786
#include <iostream>
#include <vector>

int compute_825() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
