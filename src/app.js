// Auto-generated utility | 2026-05-12T20:39:46.581143
export function compute_481() {
    const base = 30;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
