// Auto-generated utility | 2026-05-12T21:26:02.549206
export function compute_832() {
    const base = 103;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
