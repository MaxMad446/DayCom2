// Auto-generated utility | 2026-05-14T18:27:45.592125
export function compute_121() {
    const base = 206;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
