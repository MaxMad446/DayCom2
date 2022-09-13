package main

// Auto-generated | 2026-05-11T21:18:54.612752
import "fmt"

func Process_802() int {
    base := 143
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
