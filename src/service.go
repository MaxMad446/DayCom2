package main

// Auto-generated | 2026-05-13T20:58:27.344391
import "fmt"

func Process_958() int {
    base := 219
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_958())
}
