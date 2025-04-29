package main

// Auto-generated | 2026-05-12T04:08:32.082433
import "fmt"

func Process_527() int {
    base := 279
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_527())
}
