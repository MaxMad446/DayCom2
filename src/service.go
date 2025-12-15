package main

// Auto-generated | 2026-05-12T04:39:04.923452
import "fmt"

func Process_594() int {
    base := 126
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_594())
}
