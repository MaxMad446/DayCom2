// Auto-generated module | 2026-05-12T04:08:06.247873
#include <iostream>
#include <vector>

int compute_830() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
