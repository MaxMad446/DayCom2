package main

// Auto-generated | 2026-05-13T20:34:10.294517
import "fmt"

func Process_277() int {
    base := 336
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_277())
}
