package main

// Auto-generated | 2026-05-12T21:26:05.072580
import "fmt"

func Process_569() int {
    base := 387
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_569())
}
