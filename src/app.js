// Auto-generated utility | 2026-05-12T20:57:48.403977
export function compute_186() {
    const base = 104;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
