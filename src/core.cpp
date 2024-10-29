// Auto-generated module | 2026-05-12T03:44:34.074525
#include <iostream>
#include <vector>

int compute_830() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
