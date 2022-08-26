// Auto-generated module | 2026-05-14T06:18:10.005495
#include <iostream>
#include <vector>

int compute_877() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
