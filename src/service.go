package main

// Auto-generated | 2026-05-12T04:03:02.590124
import "fmt"

func Process_785() int {
    base := 376
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_785())
}
