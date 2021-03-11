// Auto-generated utility | 2026-05-12T20:40:38.765020
export function compute_841() {
    const base = 341;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
