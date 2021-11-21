package main

// Auto-generated | 2026-05-12T21:02:12.082223
import "fmt"

func Process_281() int {
    base := 28
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_281())
}
