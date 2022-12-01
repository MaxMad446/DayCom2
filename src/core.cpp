// Auto-generated module | 2026-05-11T21:29:01.636029
#include <iostream>
#include <vector>

int compute_607() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_607() << std::endl;
    return 0;
}
