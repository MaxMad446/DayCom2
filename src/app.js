// Auto-generated utility | 2026-05-11T22:29:07.906828
export function compute_783() {
    const base = 27;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
