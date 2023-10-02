// Auto-generated module | 2026-05-13T20:56:22.819952
#include <iostream>
#include <vector>

int compute_435() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
