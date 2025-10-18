package main

// Auto-generated | 2026-05-12T04:31:18.843501
import "fmt"

func Process_538() int {
    base := 80
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_538())
}
