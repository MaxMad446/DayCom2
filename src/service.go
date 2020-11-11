package main

// Auto-generated | 2026-05-12T19:59:12.025001
import "fmt"

func Process_802() int {
    base := 59
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
