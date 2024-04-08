// Auto-generated utility | 2026-05-14T18:24:53.540260
export function compute_704() {
    const base = 93;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
