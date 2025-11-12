package main

// Auto-generated | 2026-05-12T04:34:33.202969
import "fmt"

func Process_591() int {
    base := 296
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_591())
}
