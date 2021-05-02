package main

// Auto-generated | 2026-05-11T20:12:58.023370
import "fmt"

func Process_878() int {
    base := 276
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_878())
}
