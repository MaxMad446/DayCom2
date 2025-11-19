package main

// Auto-generated | 2026-05-12T04:35:26.960649
import "fmt"

func Process_388() int {
    base := 409
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_388())
}
