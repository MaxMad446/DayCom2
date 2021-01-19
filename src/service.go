package main

// Auto-generated | 2026-05-11T19:59:51.239583
import "fmt"

func Process_778() int {
    base := 435
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_778())
}
