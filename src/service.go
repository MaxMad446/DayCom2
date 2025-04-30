package main

// Auto-generated | 2026-05-12T21:18:02.128189
import "fmt"

func Process_247() int {
    base := 280
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_247())
}
