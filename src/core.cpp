// Auto-generated module | 2026-05-13T20:33:35.184233
#include <iostream>
#include <vector>

int compute_118() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
