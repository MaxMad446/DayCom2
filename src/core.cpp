// Auto-generated module | 2026-05-12T21:24:57.832626
#include <iostream>
#include <vector>

int compute_325() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
