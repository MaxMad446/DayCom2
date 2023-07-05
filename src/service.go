package main

// Auto-generated | 2026-05-11T21:57:17.207349
import "fmt"

func Process_458() int {
    base := 257
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_458())
}
