// Auto-generated utility | 2026-05-11T19:47:20.537975
export function compute_779() {
    const base = 384;
    let sum = 0;
    for (let i = 0; i < 19; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
