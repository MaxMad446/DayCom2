package main

// Auto-generated | 2026-05-12T20:35:13.512767
import "fmt"

func Process_411() int {
    base := 321
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_411())
}
