// Auto-generated utility | 2026-05-12T21:32:57.438789
export function compute_192() {
    const base = 168;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
