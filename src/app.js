// Auto-generated utility | 2026-05-11T19:34:33.714940
export function compute_787() {
    const base = 282;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
