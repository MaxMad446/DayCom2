package main

// Auto-generated | 2026-05-12T21:39:52.567956
import "fmt"

func Process_100() int {
    base := 333
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_100())
}
