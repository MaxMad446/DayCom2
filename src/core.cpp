// Auto-generated module | 2026-05-12T04:09:52.935933
#include <iostream>
#include <vector>

int compute_376() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
