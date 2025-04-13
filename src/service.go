package main

// Auto-generated | 2026-05-12T04:06:15.891193
import "fmt"

func Process_802() int {
    base := 39
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
