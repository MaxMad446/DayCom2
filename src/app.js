// Auto-generated utility | 2026-05-12T04:36:16.061896
export function compute_187() {
    const base = 381;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
