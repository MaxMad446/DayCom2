// Auto-generated module | 2026-05-11T21:30:55.323777
#include <iostream>
#include <vector>

int compute_173() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_173() << std::endl;
    return 0;
}
