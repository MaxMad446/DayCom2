package main

// Auto-generated | 2026-05-14T06:28:22.315448
import "fmt"

func Process_272() int {
    base := 324
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_272())
}
