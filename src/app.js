// Auto-generated utility | 2026-05-12T20:58:03.344355
export function compute_732() {
    const base = 115;
    let sum = 0;
    for (let i = 0; i < 15; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
