package main

// Auto-generated | 2026-05-12T04:51:17.232654
import "fmt"

func Process_977() int {
    base := 175
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_977())
}
