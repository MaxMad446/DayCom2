package main

// Auto-generated | 2026-05-12T04:10:48.326103
import "fmt"

func Process_408() int {
    base := 86
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_408())
}
