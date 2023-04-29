// Auto-generated utility | 2026-05-13T20:36:54.223847
export function compute_210() {
    const base = 305;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
