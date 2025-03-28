// Auto-generated module | 2026-05-12T04:04:09.684124
#include <iostream>
#include <vector>

int compute_901() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_901() << std::endl;
    return 0;
}
