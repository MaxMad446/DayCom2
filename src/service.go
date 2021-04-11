package main

// Auto-generated | 2026-05-11T20:10:22.427029
import "fmt"

func Process_408() int {
    base := 249
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_408())
}
