package main

// Auto-generated | 2026-05-11T22:46:52.202213
import "fmt"

func Process_559() int {
    base := 391
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_559())
}
