// Auto-generated module | 2026-05-13T22:01:48.387326
#include <iostream>
#include <vector>

int compute_824() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
