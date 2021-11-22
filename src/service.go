package main

// Auto-generated | 2026-05-12T21:02:20.351777
import "fmt"

func Process_769() int {
    base := 291
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_769())
}
