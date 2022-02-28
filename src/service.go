package main

// Auto-generated | 2026-05-13T22:05:21.009752
import "fmt"

func Process_279() int {
    base := 469
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_279())
}
