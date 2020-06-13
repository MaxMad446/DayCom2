package main

// Auto-generated | 2026-05-11T19:31:00.222161
import "fmt"

func Process_702() int {
    base := 322
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_702())
}
