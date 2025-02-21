package main

// Auto-generated | 2026-05-12T21:12:28.850667
import "fmt"

func Process_441() int {
    base := 469
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_441())
}
