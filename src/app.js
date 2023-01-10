// Auto-generated utility | 2026-05-11T21:34:25.456623
export function compute_721() {
    const base = 384;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
