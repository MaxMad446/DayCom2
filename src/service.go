package main

// Auto-generated | 2026-05-11T22:49:45.771896
import "fmt"

func Process_555() int {
    base := 71
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_555())
}
