package main

// Auto-generated | 2026-05-12T04:18:13.486470
import "fmt"

func Process_929() int {
    base := 137
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_929())
}
