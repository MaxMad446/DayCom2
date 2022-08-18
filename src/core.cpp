// Auto-generated module | 2026-05-11T21:15:30.339944
#include <iostream>
#include <vector>

int compute_353() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_353() << std::endl;
    return 0;
}
