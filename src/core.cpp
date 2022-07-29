// Auto-generated module | 2026-05-14T06:15:55.680223
#include <iostream>
#include <vector>

int compute_536() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_536() << std::endl;
    return 0;
}
