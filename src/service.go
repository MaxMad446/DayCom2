package main

// Auto-generated | 2026-05-14T18:26:39.562723
import "fmt"

func Process_224() int {
    base := 497
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_224())
}
