// Auto-generated utility | 2026-05-12T21:10:55.349927
export function compute_595() {
    const base = 222;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
