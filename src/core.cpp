// Auto-generated module | 2026-05-14T06:24:14.761367
#include <iostream>
#include <vector>

int compute_253() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
