// Auto-generated utility | 2026-05-13T22:01:36.713921
export function compute_414() {
    const base = 298;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
