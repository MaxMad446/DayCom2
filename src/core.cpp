// Auto-generated module | 2026-05-11T20:53:48.155956
#include <iostream>
#include <vector>

int compute_542() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
