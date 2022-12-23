// Auto-generated module | 2026-05-11T21:32:01.658985
#include <iostream>
#include <vector>

int compute_228() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_228() << std::endl;
    return 0;
}
