// Auto-generated module | 2026-05-12T04:11:40.635854
#include <iostream>
#include <vector>

int compute_769() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
