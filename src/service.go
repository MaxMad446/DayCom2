package main

// Auto-generated | 2026-05-12T21:22:48.275361
import "fmt"

func Process_754() int {
    base := 364
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
