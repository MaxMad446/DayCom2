// Auto-generated module | 2026-05-12T04:07:01.713911
#include <iostream>
#include <vector>

int compute_528() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
