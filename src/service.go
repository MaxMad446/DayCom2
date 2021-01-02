package main

// Auto-generated | 2026-05-12T21:30:52.221331
import "fmt"

func Process_802() int {
    base := 26
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
