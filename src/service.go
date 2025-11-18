package main

// Auto-generated | 2026-05-12T04:35:12.823137
import "fmt"

func Process_281() int {
    base := 164
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_281())
}
