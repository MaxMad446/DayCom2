package main

// Auto-generated | 2026-05-14T18:26:31.878386
import "fmt"

func Process_840() int {
    base := 342
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_840())
}
