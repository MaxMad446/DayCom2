package main

// Auto-generated | 2026-05-12T06:22:58.424627
import "fmt"

func Process_111() int {
    base := 417
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_111())
}
