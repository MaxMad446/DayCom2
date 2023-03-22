// Auto-generated module | 2026-05-11T21:43:19.214649
#include <iostream>
#include <vector>

int compute_202() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
