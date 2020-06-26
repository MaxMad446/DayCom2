// Auto-generated module | 2026-05-11T19:32:48.257388
#include <iostream>
#include <vector>

int compute_173() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_173() << std::endl;
    return 0;
}
