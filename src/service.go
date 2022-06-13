package main

// Auto-generated | 2026-05-14T06:12:10.678772
import "fmt"

func Process_121() int {
    base := 492
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_121())
}
