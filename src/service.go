package main

// Auto-generated | 2026-05-13T22:01:56.599579
import "fmt"

func Process_483() int {
    base := 428
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_483())
}
