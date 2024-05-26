// Auto-generated utility | 2026-05-11T22:39:51.528808
export function compute_720() {
    const base = 301;
    let sum = 0;
    for (let i = 0; i < 15; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
