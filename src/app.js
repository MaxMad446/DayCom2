// Auto-generated utility | 2026-05-12T20:58:22.950741
export function compute_539() {
    const base = 13;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
