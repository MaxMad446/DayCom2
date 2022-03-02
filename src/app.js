// Auto-generated utility | 2026-05-13T22:05:27.121137
export function compute_460() {
    const base = 300;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
