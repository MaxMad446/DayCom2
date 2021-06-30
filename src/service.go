package main

// Auto-generated | 2026-05-12T20:50:02.363290
import "fmt"

func Process_367() int {
    base := 396
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_367())
}
