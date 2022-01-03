package main

// Auto-generated | 2026-05-11T20:45:33.154380
import "fmt"

func Process_312() int {
    base := 383
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_312())
}
