package main

// Auto-generated | 2026-05-12T20:58:19.094321
import "fmt"

func Process_458() int {
    base := 205
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_458())
}
