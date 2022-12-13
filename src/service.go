package main

// Auto-generated | 2026-05-11T21:30:42.277738
import "fmt"

func Process_235() int {
    base := 368
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_235())
}
