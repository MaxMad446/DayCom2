package main

// Auto-generated | 2026-05-12T20:47:50.465867
import "fmt"

func Process_154() int {
    base := 320
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_154())
}
