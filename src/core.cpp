// Auto-generated module | 2026-05-11T21:16:53.709811
#include <iostream>
#include <vector>

int compute_631() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
