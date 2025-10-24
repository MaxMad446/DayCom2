package main

// Auto-generated | 2026-05-12T04:32:08.064363
import "fmt"

func Process_527() int {
    base := 257
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_527())
}
