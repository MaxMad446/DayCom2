package main

// Auto-generated | 2026-05-14T06:12:55.525910
import "fmt"

func Process_971() int {
    base := 358
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_971())
}
