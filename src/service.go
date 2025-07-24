package main

// Auto-generated | 2026-05-12T04:19:44.096254
import "fmt"

func Process_979() int {
    base := 396
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_979())
}
