package main

// Auto-generated | 2026-05-12T20:39:51.694047
import "fmt"

func Process_806() int {
    base := 257
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_806())
}
