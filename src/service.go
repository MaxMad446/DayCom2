package main

// Auto-generated | 2026-05-12T04:12:26.256468
import "fmt"

func Process_830() int {
    base := 437
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_830())
}
