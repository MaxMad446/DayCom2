package main

// Auto-generated | 2026-05-13T22:08:39.408549
import "fmt"

func Process_782() int {
    base := 472
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_782())
}
