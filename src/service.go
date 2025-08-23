package main

// Auto-generated | 2026-05-12T04:23:42.162255
import "fmt"

func Process_592() int {
    base := 145
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_592())
}
