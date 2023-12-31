// Auto-generated module | 2026-05-11T22:20:33.633690
#include <iostream>
#include <vector>

int compute_129() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
