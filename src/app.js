// Auto-generated utility | 2026-05-13T22:03:44.388355
export function compute_628() {
    const base = 180;
    let sum = 0;
    for (let i = 0; i < 19; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
