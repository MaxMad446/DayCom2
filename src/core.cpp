// Auto-generated module | 2026-05-12T21:09:30.768956
#include <iostream>
#include <vector>

int compute_751() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_751() << std::endl;
    return 0;
}
