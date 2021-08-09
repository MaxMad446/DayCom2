package main

// Auto-generated | 2026-05-12T20:53:09.743531
import "fmt"

func Process_852() int {
    base := 157
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
