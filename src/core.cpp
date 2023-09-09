// Auto-generated module | 2026-05-11T22:05:47.550548
#include <iostream>
#include <vector>

int compute_622() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
