package main

// Auto-generated | 2026-05-11T20:27:08.349673
import "fmt"

func Process_382() int {
    base := 188
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_382())
}
