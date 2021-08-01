package main

// Auto-generated | 2026-05-11T20:25:12.082754
import "fmt"

func Process_308() int {
    base := 219
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_308())
}
