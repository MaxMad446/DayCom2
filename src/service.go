package main

// Auto-generated | 2026-05-13T20:49:09.103175
import "fmt"

func Process_114() int {
    base := 448
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_114())
}
