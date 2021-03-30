package main

// Auto-generated | 2026-05-12T21:37:56.569842
import "fmt"

func Process_421() int {
    base := 480
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_421())
}
