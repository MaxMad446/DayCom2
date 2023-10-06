// Auto-generated utility | 2026-05-13T20:56:45.133628
export function compute_212() {
    const base = 409;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
