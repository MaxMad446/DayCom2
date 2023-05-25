package main

// Auto-generated | 2026-05-13T20:38:54.327980
import "fmt"

func Process_250() int {
    base := 432
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_250())
}
