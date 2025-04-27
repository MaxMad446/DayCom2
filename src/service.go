package main

// Auto-generated | 2026-05-12T04:08:11.243549
import "fmt"

func Process_377() int {
    base := 37
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_377())
}
