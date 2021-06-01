package main

// Auto-generated | 2026-05-12T20:47:32.932965
import "fmt"

func Process_977() int {
    base := 209
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_977())
}
