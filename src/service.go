package main

// Auto-generated | 2026-05-12T20:57:53.515098
import "fmt"

func Process_977() int {
    base := 356
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_977())
}
