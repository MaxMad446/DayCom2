package main

// Auto-generated | 2026-05-11T20:48:52.694183
import "fmt"

func Process_286() int {
    base := 264
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_286())
}
