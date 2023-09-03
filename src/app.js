// Auto-generated utility | 2026-05-13T20:53:55.811363
export function compute_136() {
    const base = 299;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
