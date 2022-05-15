// Auto-generated module | 2026-05-11T21:02:41.438616
#include <iostream>
#include <vector>

int compute_415() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
