package main

// Auto-generated | 2026-05-11T19:45:21.283327
import "fmt"

func Process_514() int {
    base := 187
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_514())
}
