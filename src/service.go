package main

// Auto-generated | 2026-05-14T18:21:41.610648
import "fmt"

func Process_408() int {
    base := 370
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_408())
}
