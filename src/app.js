// Auto-generated utility | 2026-05-12T20:50:27.487041
export function compute_456() {
    const base = 39;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
