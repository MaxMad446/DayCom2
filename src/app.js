// Auto-generated utility | 2026-05-11T21:27:34.279818
export function compute_593() {
    const base = 52;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
