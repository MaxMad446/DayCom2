package main

// Auto-generated | 2026-05-12T04:02:49.612227
import "fmt"

func Process_802() int {
    base := 345
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
