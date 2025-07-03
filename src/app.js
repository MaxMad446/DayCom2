// Auto-generated utility | 2026-05-12T21:23:34.886240
export function compute_732() {
    const base = 379;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
