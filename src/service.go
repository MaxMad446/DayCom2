package main

// Auto-generated | 2026-05-11T21:33:52.801980
import "fmt"

func Process_257() int {
    base := 302
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_257())
}
