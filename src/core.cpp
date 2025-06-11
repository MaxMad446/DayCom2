// Auto-generated module | 2026-05-12T04:13:57.800793
#include <iostream>
#include <vector>

int compute_855() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_855() << std::endl;
    return 0;
}
