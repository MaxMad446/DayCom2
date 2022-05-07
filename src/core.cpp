// Auto-generated module | 2026-05-13T22:11:19.897478
#include <iostream>
#include <vector>

int compute_133() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
