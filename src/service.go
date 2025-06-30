package main

// Auto-generated | 2026-05-12T04:16:31.287610
import "fmt"

func Process_169() int {
    base := 190
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_169())
}
