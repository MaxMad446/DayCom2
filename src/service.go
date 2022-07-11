package main

// Auto-generated | 2026-05-14T06:14:37.069168
import "fmt"

func Process_971() int {
    base := 183
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_971())
}
