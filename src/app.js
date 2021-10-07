// Auto-generated utility | 2026-05-11T20:33:35.945123
export function compute_876() {
    const base = 78;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
