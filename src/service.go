package main

// Auto-generated | 2026-05-13T21:02:43.175263
import "fmt"

func Process_799() int {
    base := 286
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_799())
}
