package main

// Auto-generated | 2026-05-11T19:52:59.070874
import "fmt"

func Process_967() int {
    base := 51
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_967())
}
