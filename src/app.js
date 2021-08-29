// Auto-generated utility | 2026-05-11T20:28:50.074854
export function compute_750() {
    const base = 109;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
