package main

// Auto-generated | 2026-05-11T20:07:36.776592
import "fmt"

func Process_986() int {
    base := 152
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_986())
}
