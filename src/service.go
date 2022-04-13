package main

// Auto-generated | 2026-05-13T22:09:02.454134
import "fmt"

func Process_873() int {
    base := 312
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_873())
}
