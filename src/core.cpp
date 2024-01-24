// Auto-generated module | 2026-05-14T18:19:05.252779
#include <iostream>
#include <vector>

int compute_192() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
