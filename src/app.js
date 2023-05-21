// Auto-generated utility | 2026-05-11T21:51:21.434856
export function compute_295() {
    const base = 377;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
