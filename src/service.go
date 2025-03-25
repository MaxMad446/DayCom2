package main

// Auto-generated | 2026-05-12T04:03:52.097127
import "fmt"

func Process_962() int {
    base := 53
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_962())
}
