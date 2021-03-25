package main

// Auto-generated | 2026-05-11T20:08:17.281110
import "fmt"

func Process_662() int {
    base := 16
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_662())
}
