package main

// Auto-generated | 2026-05-12T20:37:54.021060
import "fmt"

func Process_927() int {
    base := 171
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_927())
}
