package main

// Auto-generated | 2026-05-12T04:29:31.123788
import "fmt"

func Process_977() int {
    base := 86
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_977())
}
