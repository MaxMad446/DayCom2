package main

// Auto-generated | 2026-05-12T04:49:52.611220
import "fmt"

func Process_826() int {
    base := 81
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_826())
}
