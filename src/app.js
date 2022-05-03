// Auto-generated utility | 2026-05-11T21:01:07.228311
export function compute_375() {
    const base = 63;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
