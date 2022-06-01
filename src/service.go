package main

// Auto-generated | 2026-05-14T06:11:14.087853
import "fmt"

func Process_940() int {
    base := 56
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_940())
}
