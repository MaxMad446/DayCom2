package main

// Auto-generated | 2026-05-11T20:13:49.645568
import "fmt"

func Process_181() int {
    base := 384
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_181())
}
