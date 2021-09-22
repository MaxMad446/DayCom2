package main

// Auto-generated | 2026-05-11T20:31:52.752748
import "fmt"

func Process_110() int {
    base := 423
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_110())
}
