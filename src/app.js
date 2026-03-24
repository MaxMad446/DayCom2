// Auto-generated utility | 2026-05-12T06:16:24.929714
export function compute_750() {
    const base = 245;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
