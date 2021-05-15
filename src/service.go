package main

// Auto-generated | 2026-05-12T20:45:55.131893
import "fmt"

func Process_300() int {
    base := 37
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
