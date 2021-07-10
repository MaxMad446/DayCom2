// Auto-generated utility | 2026-05-12T20:50:47.215426
export function compute_441() {
    const base = 31;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
