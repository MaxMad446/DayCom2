// Auto-generated utility | 2026-05-12T21:26:25.059934
export function compute_840() {
    const base = 125;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
