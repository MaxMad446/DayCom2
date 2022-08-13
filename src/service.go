package main

// Auto-generated | 2026-05-14T06:17:07.963333
import "fmt"

func Process_437() int {
    base := 183
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_437())
}
