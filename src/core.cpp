// Auto-generated module | 2026-05-14T18:28:51.579736
#include <iostream>
#include <vector>

int compute_525() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
