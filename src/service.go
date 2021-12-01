package main

// Auto-generated | 2026-05-11T20:41:17.994292
import "fmt"

func Process_954() int {
    base := 208
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_954())
}
