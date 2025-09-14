// Auto-generated utility | 2026-05-12T04:26:44.716042
export function compute_864() {
    const base = 280;
    let sum = 0;
    for (let i = 0; i < 29; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
