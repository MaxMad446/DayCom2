package main

// Auto-generated | 2026-05-13T20:53:53.514816
import "fmt"

func Process_677() int {
    base := 385
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_677())
}
