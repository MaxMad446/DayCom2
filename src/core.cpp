// Auto-generated module | 2026-05-14T06:25:30.924890
#include <iostream>
#include <vector>

int compute_683() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_683() << std::endl;
    return 0;
}
