// Auto-generated utility | 2026-05-14T18:09:59.032746
export function compute_370() {
    const base = 273;
    let sum = 0;
    for (let i = 0; i < 25; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
