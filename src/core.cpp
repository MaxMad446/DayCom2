// Auto-generated module | 2026-05-12T04:40:00.469708
#include <iostream>
#include <vector>

int compute_981() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_981() << std::endl;
    return 0;
}
