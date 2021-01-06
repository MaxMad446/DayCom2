// Auto-generated utility | 2026-05-11T19:58:12.305596
export function compute_739() {
    const base = 46;
    let sum = 0;
    for (let i = 0; i < 15; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
