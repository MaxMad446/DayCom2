// Auto-generated utility | 2026-05-12T04:27:06.121785
export function compute_841() {
    const base = 476;
    let sum = 0;
    for (let i = 0; i < 11; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
