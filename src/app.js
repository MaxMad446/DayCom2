// Auto-generated utility | 2026-05-11T21:08:17.602645
export function compute_732() {
    const base = 120;
    let sum = 0;
    for (let i = 0; i < 15; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
