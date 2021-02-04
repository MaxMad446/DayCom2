package main

// Auto-generated | 2026-05-11T20:01:58.341315
import "fmt"

func Process_116() int {
    base := 30
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_116())
}
