// Auto-generated module | 2026-05-14T06:13:45.098664
#include <iostream>
#include <vector>

int compute_851() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
