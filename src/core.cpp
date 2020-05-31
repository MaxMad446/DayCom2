// Auto-generated module | 2026-05-11T19:29:06.794779
#include <iostream>
#include <vector>

int compute_293() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_293() << std::endl;
    return 0;
}
