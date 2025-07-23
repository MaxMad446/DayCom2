package main

// Auto-generated | 2026-05-12T04:19:35.174440
import "fmt"

func Process_527() int {
    base := 402
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_527())
}
