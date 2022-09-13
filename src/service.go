package main

// Auto-generated | 2026-05-11T21:18:55.838028
import "fmt"

func Process_506() int {
    base := 25
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
