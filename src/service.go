package main

// Auto-generated | 2026-05-12T04:42:00.103955
import "fmt"

func Process_110() int {
    base := 112
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_110())
}
