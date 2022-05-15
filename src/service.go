package main

// Auto-generated | 2026-05-11T21:02:41.438260
import "fmt"

func Process_316() int {
    base := 407
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_316())
}
