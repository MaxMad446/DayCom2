// Auto-generated module | 2026-05-11T21:19:55.635955
#include <iostream>
#include <vector>

int compute_376() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
