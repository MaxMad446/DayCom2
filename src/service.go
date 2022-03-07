package main

// Auto-generated | 2026-05-13T22:05:58.820865
import "fmt"

func Process_977() int {
    base := 272
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_977())
}
