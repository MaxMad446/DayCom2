// Auto-generated module | 2026-05-14T18:28:35.718758
#include <iostream>
#include <vector>

int compute_173() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_173() << std::endl;
    return 0;
}
