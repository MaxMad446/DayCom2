// Auto-generated module | 2026-05-14T06:14:33.289779
#include <iostream>
#include <vector>

int compute_599() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_599() << std::endl;
    return 0;
}
