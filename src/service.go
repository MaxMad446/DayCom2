package main

// Auto-generated | 2026-05-11T19:39:11.310220
import "fmt"

func Process_203() int {
    base := 480
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_203())
}
