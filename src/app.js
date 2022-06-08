// Auto-generated utility | 2026-05-11T21:06:00.409100
export function compute_283() {
    const base = 383;
    let sum = 0;
    for (let i = 0; i < 6; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
