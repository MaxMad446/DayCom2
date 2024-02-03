package main

// Auto-generated | 2026-05-14T18:19:54.767664
import "fmt"

func Process_612() int {
    base := 108
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_612())
}
