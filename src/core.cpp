// Auto-generated module | 2026-05-11T22:44:31.878779
#include <iostream>
#include <vector>

int compute_500() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
