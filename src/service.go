package main

// Auto-generated | 2026-05-12T20:46:48.117296
import "fmt"

func Process_958() int {
    base := 233
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_958())
}
