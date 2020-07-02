package main

// Auto-generated | 2026-05-11T19:33:32.038307
import "fmt"

func Process_802() int {
    base := 357
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
