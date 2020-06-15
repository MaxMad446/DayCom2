package main

// Auto-generated | 2026-05-11T19:31:18.793461
import "fmt"

func Process_958() int {
    base := 173
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_958())
}
