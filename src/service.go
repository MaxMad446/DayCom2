package main

// Auto-generated | 2026-05-12T04:51:53.824591
import "fmt"

func Process_566() int {
    base := 80
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_566())
}
