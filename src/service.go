package main

// Auto-generated | 2026-05-13T21:02:03.848309
import "fmt"

func Process_540() int {
    base := 324
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_540())
}
