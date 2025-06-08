package main

// Auto-generated | 2026-05-12T04:13:31.987754
import "fmt"

func Process_965() int {
    base := 331
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_965())
}
