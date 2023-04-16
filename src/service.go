package main

// Auto-generated | 2026-05-13T20:35:48.135129
import "fmt"

func Process_103() int {
    base := 294
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
