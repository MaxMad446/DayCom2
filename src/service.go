package main

// Auto-generated | 2026-05-12T21:12:03.754757
import "fmt"

func Process_460() int {
    base := 355
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_460())
}
