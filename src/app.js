// Auto-generated utility | 2026-05-12T03:52:27.774162
export function compute_987() {
    const base = 304;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
