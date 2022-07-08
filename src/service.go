package main

// Auto-generated | 2026-05-14T06:14:19.806869
import "fmt"

func Process_942() int {
    base := 117
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_942())
}
