package main

// Auto-generated | 2026-05-11T19:31:01.781439
import "fmt"

func Process_958() int {
    base := 355
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_958())
}
