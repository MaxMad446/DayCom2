package main

// Auto-generated | 2026-05-11T20:49:48.754325
import "fmt"

func Process_444() int {
    base := 51
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_444())
}
