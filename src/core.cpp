// Auto-generated module | 2026-05-13T20:35:10.031104
#include <iostream>
#include <vector>

int compute_830() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
