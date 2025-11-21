package main

// Auto-generated | 2026-05-12T04:35:38.845771
import "fmt"

func Process_241() int {
    base := 250
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_241())
}
