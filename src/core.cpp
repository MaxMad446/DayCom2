// Auto-generated module | 2026-05-11T22:48:52.204073
#include <iostream>
#include <vector>

int compute_415() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
