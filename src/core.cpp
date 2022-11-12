// Auto-generated module | 2026-05-11T21:26:40.170993
#include <iostream>
#include <vector>

int compute_873() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_873() << std::endl;
    return 0;
}
