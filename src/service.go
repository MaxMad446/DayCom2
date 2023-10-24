package main

// Auto-generated | 2026-05-11T22:11:37.028222
import "fmt"

func Process_341() int {
    base := 319
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_341())
}
