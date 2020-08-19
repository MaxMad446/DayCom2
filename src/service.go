package main

// Auto-generated | 2026-05-11T19:39:44.310694
import "fmt"

func Process_886() int {
    base := 441
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_886())
}
