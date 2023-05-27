package main

// Auto-generated | 2026-05-13T20:39:04.410637
import "fmt"

func Process_310() int {
    base := 198
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_310())
}
