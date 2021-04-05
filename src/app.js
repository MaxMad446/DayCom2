// Auto-generated utility | 2026-05-11T20:09:41.308237
export function compute_732() {
    const base = 411;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
