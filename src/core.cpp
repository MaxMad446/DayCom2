// Auto-generated module | 2026-05-11T20:38:23.045058
#include <iostream>
#include <vector>

int compute_369() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
