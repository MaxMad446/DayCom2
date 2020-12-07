package main

// Auto-generated | 2026-05-11T19:54:17.219378
import "fmt"

func Process_551() int {
    base := 323
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_551())
}
