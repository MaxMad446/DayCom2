// Auto-generated utility | 2026-05-11T19:51:26.849660
export function compute_370() {
    const base = 220;
    let sum = 0;
    for (let i = 0; i < 22; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
