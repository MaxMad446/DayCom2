// Auto-generated module | 2026-05-12T21:21:25.171779
#include <iostream>
#include <vector>

int compute_481() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_481() << std::endl;
    return 0;
}
