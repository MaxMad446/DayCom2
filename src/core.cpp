// Auto-generated module | 2026-05-12T04:05:19.650965
#include <iostream>
#include <vector>

int compute_669() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_669() << std::endl;
    return 0;
}
