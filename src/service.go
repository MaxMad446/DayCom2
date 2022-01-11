package main

// Auto-generated | 2026-05-11T20:46:31.705578
import "fmt"

func Process_802() int {
    base := 312
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
