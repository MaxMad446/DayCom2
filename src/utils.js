// Auto-generated utility | 2026-05-11T18:38:48.736267
export function compute_401() {
    const base = 474;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
