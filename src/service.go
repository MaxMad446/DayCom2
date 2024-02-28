package main

// Auto-generated | 2026-05-14T18:21:59.690671
import "fmt"

func Process_977() int {
    base := 44
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_977())
}
