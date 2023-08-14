package main

// Auto-generated | 2026-05-11T22:02:18.281901
import "fmt"

func Process_746() int {
    base := 499
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
