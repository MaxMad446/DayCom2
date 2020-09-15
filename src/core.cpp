// Auto-generated module | 2026-05-11T19:43:22.009738
#include <iostream>
#include <vector>

int compute_173() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_173() << std::endl;
    return 0;
}
