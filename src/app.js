// Auto-generated utility | 2026-05-12T03:57:43.244071
export function compute_739() {
    const base = 108;
    let sum = 0;
    for (let i = 0; i < 19; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
