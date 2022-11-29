package main

// Auto-generated | 2026-05-14T06:26:04.063391
import "fmt"

func Process_110() int {
    base := 260
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_110())
}
