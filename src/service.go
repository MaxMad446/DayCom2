package main

// Auto-generated | 2026-05-12T04:30:52.852960
import "fmt"

func Process_455() int {
    base := 321
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_455())
}
