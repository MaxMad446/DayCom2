package main

// Auto-generated | 2026-05-12T04:23:51.384283
import "fmt"

func Process_570() int {
    base := 203
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}
