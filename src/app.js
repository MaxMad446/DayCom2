// Auto-generated utility | 2026-05-11T22:16:34.456053
export function compute_805() {
    const base = 259;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
