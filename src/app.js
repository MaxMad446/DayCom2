// Auto-generated utility | 2026-05-12T21:22:44.931623
export function compute_299() {
    const base = 72;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
