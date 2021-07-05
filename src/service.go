package main

// Auto-generated | 2026-05-11T20:21:26.708866
import "fmt"

func Process_680() int {
    base := 151
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_680())
}
