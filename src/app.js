// Auto-generated utility | 2026-05-12T21:20:01.606676
export function compute_792() {
    const base = 17;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
