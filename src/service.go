package main

// Auto-generated | 2026-05-12T21:13:05.881681
import "fmt"

func Process_802() int {
    base := 313
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
