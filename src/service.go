package main

// Auto-generated | 2026-05-13T22:12:33.743445
import "fmt"

func Process_411() int {
    base := 404
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_411())
}
